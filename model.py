# model.py (정리된 버전)

import torch
from tqdm import tqdm
import deeplay as dl


class Diffusion:
    def __init__(self, noise_steps=1000, beta_start=1e-4, beta_end=0.02,
                 img_size=256, device=None):
        self.noise_steps = noise_steps
        self.beta_start = beta_start
        self.beta_end = beta_end
        self.img_size = img_size
        self.device = device or torch.device("cuda" if torch.cuda.is_available() else "cpu")

        # 스케줄 초기화
        self.betas = torch.linspace(self.beta_start, self.beta_end, self.noise_steps, device=self.device)
        self.alphas = 1.0 - self.betas
        self.alpha_bar = torch.cumprod(self.alphas, dim=0)

        self.unet = self.build_unet(pos_enc_dim=256)

    def forward_diffusion(self, x_0, t):
        x_0 = x_0.to(self.device)
        sqrt_alpha_bar = torch.sqrt(self.alpha_bar[t])[:, None, None, None]
        sqrt_one_minus_alpha_bar = torch.sqrt(1 - self.alpha_bar[t])[:, None, None, None]
        noise = torch.randn_like(x_0)
        return sqrt_alpha_bar * x_0 + sqrt_one_minus_alpha_bar * noise, noise

    def reverse_diffusion(self, model, n_images, n_channels,
                          position_encoding_dim, position_encoding_function,
                          save_timesteps=None, input_image=None):
        with torch.no_grad():
            x = torch.randn((n_images, n_channels, self.img_size, self.img_size), device=self.device)
            denoised_images = []

            for i in tqdm(reversed(range(0, self.noise_steps)), desc='UNet Inference', total=self.noise_steps):
                t = (torch.ones(n_images) * i).long().to(self.device)
                t_pos_enc = position_encoding_function(t.unsqueeze(1), position_encoding_dim).to(self.device)

                model_input = torch.cat((input_image.to(self.device), x), dim=1) if input_image is not None else x
                predicted_noise = model(model_input, t_pos_enc)

                alpha = self.alphas[t][:, None, None, None]
                alpha_bar = self.alpha_bar[t][:, None, None, None]
                noise = torch.randn_like(x) if i > 0 else torch.zeros_like(x)

                x = (1 / torch.sqrt(alpha)) * (
                    x - ((1 - alpha) / torch.sqrt(1 - alpha_bar)) * predicted_noise
                ) + torch.sqrt(1 - alpha) * noise

                if save_timesteps and i in save_timesteps:
                    denoised_images.append(x)

            if save_timesteps:
                denoised_images = torch.stack(denoised_images)
                denoised_images = denoised_images.swapaxes(0, 1)
                return denoised_images
            else:
                return x

    def positional_encoding(self, t, enc_dim):
        inv_freq = 1.0 / (10000 ** (torch.arange(0, enc_dim, 2).float() / enc_dim)).to(t.device)
        pos_enc_a = torch.sin(t.repeat(1, enc_dim // 2) * inv_freq)
        pos_enc_b = torch.cos(t.repeat(1, enc_dim // 2) * inv_freq)
        return torch.cat([pos_enc_a, pos_enc_b], dim=-1)

    def build_unet(self, pos_enc_dim: int):
        unet = dl.AttentionUNet(
            in_channels=6,
            channels=[32, 64, 128],
            base_channels=[256, 256],
            channel_attention=[False, False, False],
            out_channels=1,
            position_embedding_dim=pos_enc_dim
        )
        unet.build()
        unet.to(self.device)
        return unet
