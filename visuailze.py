import matplotlib.pyplot as plt
import numpy as np
from dataset import get_train_dataset
from model import Diffusion
import torch

train_dataset = get_train_dataset()
low_image, normal_image = train_dataset[1]


plt.figure(figsize=(10, 5))
plt.subplot(1, 2, 1)
plt.imshow(np.transpose(low_image.numpy(), (1, 2, 0)))
plt.title('Low Light Image')
plt.axis('off')

plt.subplot(1, 2, 2)
plt.imshow(np.transpose(normal_image.numpy(), (1, 2, 0)))
plt.title('Normal Image')
plt.axis('off')
plt.show()

low_res_image, high_res_image = train_dataset[
torch.randint(0, len(train_dataset), (1,))
] 
# print(low_res_image.shape)

diffusion = Diffusion(noise_steps=201, beta_start=0.0001, beta_end=0.02) 
time_steps = torch.arange(0, 201, 20).int()

noisy_images = []
for i in range(len(time_steps)):
    noisy_image, noise = diffusion.forward_diffusion( 
    x_0= normal_image[None, ...], t=torch.tensor([time_steps[i]]))
    noisy_images.append(noisy_image)

fig, axs = plt.subplots(1, len(time_steps))
for i, ax in enumerate(axs.flatten()):
    print(noisy_images[i].shape)
    ax.imshow(noisy_images[i].squeeze().permute(1,2,0).cpu().numpy(), cmap="gray") 
    ax.set_title(f"t = {time_steps[i]}", fontsize=10)
    ax.axis("off")
plt.tight_layout()
fig.savefig("noisy_images_grid.png", dpi=300, bbox_inches="tight") 
plt.show()

position_encoding_dim = 256
pos_encs = []
for i in range(0,100):
    t = torch.tensor([i])
    pos_enc = diffusion.positional_encoding(t, position_encoding_dim)
    print(pos_enc)
    pos_encs.append(pos_enc.squeeze())
pos_encs = torch.stack(pos_encs)
fig = plt.figure()
plt.imshow(pos_encs.cpu().numpy(), cmap="Blues")
plt.xlabel("Encoding Dimension")
plt.ylabel("Time step (t)")
plt.show()