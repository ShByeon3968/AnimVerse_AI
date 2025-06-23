import torch
from torch.utils.data import Dataset
import os
from PIL import Image
from torchvision import transforms
import yaml

def load_yaml(path):
    with open(path, 'r') as f:
        config = yaml.safe_load(f)
    return config

transform = transforms.Compose([
    transforms.ToTensor(),
    transforms.Resize((256,256)),
])

class LLIEDataset(Dataset):
    def __init__(self,low_img_dir, raw_img_dir,transform=None):
        self.low_img_dir = low_img_dir
        self.raw_img_dir = raw_img_dir
        self.transform = transform

        self.filename_list = sorted([filename for filename in 
                              os.listdir(self.low_img_dir) if filename.endswith('.png') or
                              filename.endswith('.jpg') or filename.endswith('.jpeg')])
        
    def __len__(self):
        return len(self.filename_list)
    
    def __getitem__(self, idx):
        low_img_path = os.path.join(self.low_img_dir, self.filename_list[idx])
        raw_img_path = os.path.join(self.raw_img_dir, self.filename_list[idx])

        low_img = Image.open(low_img_path).convert('RGB')
        raw_img = Image.open(raw_img_path).convert('RGB')

        if self.transform:
            low_img = self.transform(low_img)
            raw_img = self.transform(raw_img)

        return low_img, raw_img


def get_train_dataset():
    config = load_yaml('config.yaml')
    low_image_dir = os.path.join(config['dataset']['train_dir'],'Low')
    raw_image_dir = os.path.join(config['dataset']['train_dir'],'Normal')
    return LLIEDataset(low_image_dir, raw_image_dir, transform=transform)

def get_val_dataset():
    config = load_yaml('config.yaml')
    low_image_dir = os.path.join(config['dataset']['val_dir'],'Low')
    raw_image_dir = os.path.join(config['dataset']['val_dir'],'Normal')
    return LLIEDataset(low_image_dir, raw_image_dir, transform=transform)