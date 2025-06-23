import torch
from tqdm import tqdm
import deeplay as dl

if torch.cuda.is_available():
    device = torch.device("cuda")
else:
    device = torch.device("cpu")

class Diffusion:
    '''
    DDPM class
    '''
    def __init__(self, noise_steps=1000,beta_start=1e-4, beta_end=0.02,
                 img_size=256,device=device):
        self.noise_steps = noise_steps
        self.beta_start = beta_start
        self.beta_end = beta_end
        self.device = device
        self.img_size = img_size

        # Calculate betas
        self.betas = self.prepare_noise_schedule().to(device)
        self.alphas = 1.0 - self.betas
        self.alpha_bar = torch.cumprod(self.alphas, dim=0)

        self.unet = self.build_unet(256)
    
    def prepare_noise_schedule(self):
        return torch.linspace(self.beta_start, self.beta_end, self.noise_steps, device=self.device)
    

    def forward_diffusion(self,x_0,t):
        """
        Forward diffusion process
        :param x_0: Original image
        :param t: Time step
        :return: Noisy image at time t
        """
        x_0 = x_0.to(self.device)
        sqrt_alpha_bar = torch.sqrt(self.alpha_bar[t])[:,None,None,None]
        sqrt_one_minus_alpha_bar = torch.sqrt(1 - self.alpha_bar[t])[:,None,None,None]
        noise = torch.randn_like(x_0)
        return sqrt_alpha_bar * x_0 + sqrt_one_minus_alpha_bar * noise, noise
    
    def reverse_diffusion(self, model, n_images, n_channels,
                          position_encoding_dim, poisition_encoding_fuc,
                          save_timesteps=None, input_image=None):
        '''
        args:
        model: UNet model
        n_images: 생성할 이미지 개수
        n_channels: 이미지 채널 수
        position_encoding_dim: 포지션 인코딩 차원
        poisition_encoding_fuc: 포지션 인코딩 함수
        save_timesteps: 저장할 타임스텝
        input_image: 저조도 입력 이미지
        '''

        with torch.no_grad():
            # 순수한 노이즈 이미지 생성
            x = torch.randn((n_images,n_channels, self.img_size, self.img_size), device=self.device)

            denoised_images = []
            for i in tqdm(reversed(range(0,self.noise_steps)),
                          desc='UNet Inference',total=self.noise_steps):
                t = (torch.ones(n_images) * i).long()
                
                t_pos_enc = poisition_encoding_fuc(
                    t.unsqueeze(1),position_encoding_dim
                ).to(self.device) # 해당 시간 스텝값을 위치 인코딩 벡터로 변환

                predicted_noise = model(
                    torch.cat((input_image.to(self.device),x),dim=1),
                    t_pos_enc
                ) # 노이즈 이미지와 인코딩 시간 스텝을 신경망 모델에 입력
                # 모델은 주어진 입력 이미지에 적용된 노이즈를 예측
                # 입력 이미지와 노이즈 이미지를 연결하여 모델에 전달

                alpha = self.alphas[t][:,None,None,None]
                alpha_bar = self.alpha_bar[t][:,None,None,None]

                if i > 0:
                    noise = torch.randn_like(x)
                else:
                    noise = torch.zeros_like(x) # 마지막 단계에서는 노이즈가 필요 없음
                
                # 노이즈 제거 수식
                x = (1 / torch.sqrt(alpha)) * (x - ((1 - alpha) / torch.sqrt(1 - alpha_bar)) * predicted_noise) + torch.sqrt(1 - alpha) * noise

                if i in save_timesteps:
                    denoised_images.append(x) # denoised_images에 현재 단계의 이미지를 저장

                denoised_images = torch.stack(denoised_images)
                denoised_images = denoised_images.swapaxes(0,1)
                return denoised_images
    
    def positional_encoding(self,t, enc_dim):
        # 인코딩 차원 내에서 짝수인덱스를 선택하여 inverse frequencies 생성
        inv_freq = 1.0 / (10000 ** (torch.arange(0, enc_dim, 2).float() / enc_dim)).to(t.device)
        # 시간 스텝 t 값을 enc_dim//2 길이만큼 반복하여 주파수 배열과 곱, 사인/코사인 함수의 입력값
        pos_enc_a = torch.sin(t.repeat(1, enc_dim // 2) * inv_freq)
        pos_enc_b = torch.cos(t.repeat(1, enc_dim // 2) * inv_freq)
        pos_enc = torch.cat([pos_enc_a,pos_enc_b],dim=-1)
        return pos_enc
    
    def build_unet(self,pos_enc_dim:int):
        unet = dl.AttentionUNet(
            in_channels=6, channels=[32,64,128],
            base_channels=[256,256],channel_attention=[False,False,False],
            out_channels=1,
            position_embedding_dim=pos_enc_dim
        )
        unet.build()
        unet.to(self.device)
        return unet
    

