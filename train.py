# train.py (통합된 전체 코드)

import os
import time
from datetime import timedelta

import torch
import torch.nn as nn
import torch.optim as optim
from torch.utils.data import DataLoader
import matplotlib.pyplot as plt

from dataset import get_train_dataset, get_val_dataset
from model import Diffusion


def prepare_data(input_image, target_image, noise_steps, diffusion: Diffusion, pos_enc_dim=256, device=torch.device("cuda")):
    batch_size = input_image.shape[0]

    input_image = input_image.to(device)
    target_image = target_image.to(device)

    t = torch.randint(low=0, high=noise_steps, size=(batch_size,)).to(device)

    x_t, noise = diffusion.forward_diffusion(target_image, t)
    x_t = torch.cat((input_image, x_t), dim=1)

    t = diffusion.positional_encoding(t.unsqueeze(1), pos_enc_dim)

    return x_t.to(device), t.to(device), noise.to(device)


# Hyperparameters
batch_size = 64
pos_enc_dim = 256
noise_steps = 2000
epochs = 60
device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

# Data
train_ds = get_train_dataset()
val_ds = get_val_dataset()
train_loader = DataLoader(train_ds, batch_size=batch_size, shuffle=True)
val_loader = DataLoader(val_ds, batch_size=batch_size, shuffle=False)

# Model & training setup
diffusion = Diffusion(noise_steps=noise_steps, img_size=256, beta_start=1e-6, beta_end=0.01, device=device)
criterion = nn.MSELoss()
optimizer = optim.AdamW(diffusion.unet.parameters(), lr=1e-4)

train_loss = []
val_loss = []

# 체크포인트 디렉토리 생성
checkpoint_dir = "checkpoints"
os.makedirs(checkpoint_dir, exist_ok=True)
best_val_loss = float("inf")

for epoch in range(epochs):
    start_time = time.time()
    num_batches = len(train_loader)
    print(f"\nEpoch {epoch + 1}/{epochs}\n" + "_" * 10)

    diffusion.unet.train()
    running_loss = 0.0

    for batch_idx, (input_images, target_images) in enumerate(train_loader, start=0):
        x_t, t, noise = prepare_data(input_images, target_images, noise_steps, diffusion, pos_enc_dim, device)
        outputs = diffusion.unet(x=x_t, t=t)

        optimizer.zero_grad()
        loss = criterion(outputs, noise)
        loss.backward()
        optimizer.step()

        if batch_idx % 200 == 0:
            print(f"Batch {batch_idx + 1}/{num_batches}: Train loss: {loss.item():.4f}")
        running_loss += loss.item()

    epoch_train_loss = running_loss / num_batches
    train_loss.append(epoch_train_loss)

    # Validation (정량적)
    diffusion.unet.eval()
    val_running_loss = 0.0
    with torch.no_grad():
        for input_images, target_images in val_loader:
            x_t, t, noise = prepare_data(input_images, target_images, noise_steps, diffusion, pos_enc_dim, device)
            outputs = diffusion.unet(x=x_t, t=t)
            val_loss_batch = criterion(outputs, noise)
            val_running_loss += val_loss_batch.item()
    epoch_val_loss = val_running_loss / len(val_loader)
    val_loss.append(epoch_val_loss)

    # 시각화 (diffusion trajectory)
    n_images = 4
    val_input_images, val_target_images = next(iter(val_loader))
    generated_images = diffusion.reverse_diffusion(
        model=diffusion.unet,
        n_images=n_images,
        n_channels=3,
        position_encoding_dim=pos_enc_dim,
        position_encoding_function=diffusion.positional_encoding,
        save_timesteps=[0],
        input_image=val_input_images[:n_images]
    )

    fig = plt.figure(figsize=(5, 8))
    for i in range(n_images):
        image_diff_trajectory = generated_images[i]
        low_res_image = val_input_images[i]
        generated_high_res_image = image_diff_trajectory[-1]
        target_high_res_image = val_target_images[i]

        plt.subplot(n_images, 3, i * 3 + 1)
        plt.title("Input")
        plt.imshow(low_res_image.permute(1, 2, 0).cpu().numpy(), cmap="gray")
        plt.axis("off")

        plt.subplot(n_images, 3, i * 3 + 2)
        plt.title("Output")
        plt.imshow(generated_high_res_image.permute(1, 2, 0).cpu().numpy(), cmap="gray")
        plt.axis("off")

        plt.subplot(n_images, 3, i * 3 + 3)
        plt.title("Target")
        plt.imshow(target_high_res_image.permute(1, 2, 0).cpu().numpy(), cmap="gray")
        plt.axis("off")
    plt.show()
    plt.close(fig)

    # 모델 저장
    checkpoint_path = os.path.join(checkpoint_dir, f"epoch_{epoch+1}.pth")
    torch.save({
        'epoch': epoch + 1,
        'model_state_dict': diffusion.unet.state_dict(),
        'optimizer_state_dict': optimizer.state_dict(),
        'train_loss': epoch_train_loss,
        'val_loss': epoch_val_loss,
    }, checkpoint_path)
    print(f"Saved checkpoint: {checkpoint_path}")

    # Best model 저장
    if epoch_val_loss < best_val_loss:
        best_val_loss = epoch_val_loss
        best_model_path = os.path.join(checkpoint_dir, "best_model.pth")
        torch.save({
            'epoch': epoch + 1,
            'model_state_dict': diffusion.unet.state_dict(),
            'optimizer_state_dict': optimizer.state_dict(),
            'train_loss': epoch_train_loss,
            'val_loss': epoch_val_loss,
        }, best_model_path)
        print(f"Best model updated: {best_model_path}")

    end_time = time.time()
    print("-" * 10)
    print(f"Epoch {epoch + 1}/{epochs} : Train loss: {epoch_train_loss:.4f}, Val loss: {epoch_val_loss:.4f}, Time taken: {timedelta(seconds=end_time - start_time)}")