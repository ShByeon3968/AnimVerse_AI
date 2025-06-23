from torch.utils.data import DataLoader
from dataset import get_train_dataset, get_val_dataset
from model import Diffusion
import torch.nn as nn
import torch.optim as optim
import torch
import time
import timedelta

def prepare_data(input_image, target_image,noise_steps,diffusion: Diffusion,pos_enc_dim=256,device=torch.device("cuda")):
    batch_size = input_image.shape[0]

    input_image = input_image.to(device)
    target_image = target_image.to(device)

    t = torch.randint(low=0, high=noise_steps, size=(batch_size,)).to(device)

    x_t, noise = diffusion.forward_diffusion(target_image, t)
    x_t = torch.cat((input_image,x_t),dim=1)

    t = diffusion.positional_encoding(t.unsqueeze(1),pos_enc_dim)

    return x_t.to(device), t.to(device), noise.to(device)

batch_size = 64
pos_enc_dim=256
train_ds = get_train_dataset()
val_ds = get_val_dataset()
train_loader = DataLoader(train_ds,batch_size=batch_size,shuffle=True)
val_loader = DataLoader(val_ds,batch_size=batch_size,shuffle=False)

noise_steps = 2000
diffusion = Diffusion(noise_steps=noise_steps,
                      img_size=256,beta_start=1e-6,beta_end=0.01)

criterion = nn.MSELoss()
optimizer = optim.AdamW(diffusion.unet.parameters(),lr=1e-4)

epochs = 60
train_loss = []
for epoch in range(epochs):
    start_time = time.time()
    num_batches = len(train_loader)
    print("\n" + f"Epoch {epoch + 1}/{epochs}" + "\n" + "_" * 10)
    diffusion.unet.train()

    running_loss = 0.0
    for batch_idx, (input_images, target_images) in enumerate(train_loader,start=0):
        x_t , t , noise = prepare_data(input_images,target_images,noise_steps,diffusion,pos_enc_dim)
        outputs = diffusion.unet(x=x_t,t=t)

        optimizer.zero_grad()
        loss = criterion(outputs,noise)
        loss.backward()
        optimizer.step()

        if batch_idx % 200 == 0:
            print(f"Batch {batch_idx + 1}/{num_batches}: " 
                    + f"Train loss: {loss.item():.4f}")
        running_loss += loss.item()

    train_loss.append(running_loss / num_batches)
    end_time = time.time() 

    print("-" * 10 + "\n" + f"Epoch {epoch + 1}/{epochs} : " 
            + f"Train loss: {train_loss[-1]:.4f}, "
            + f"Time taken: {timedelta(seconds=end_time - start_time)}")