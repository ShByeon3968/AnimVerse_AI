import os

# 대상 폴더 경로
folder_path = "./data/val/Low"  # 원하는 폴더 경로로 수정하세요

# 제거할 키워드 목록
keywords_to_remove = ['low', 'normal']

# 파일 이름 변경
for filename in os.listdir(folder_path):
    if not filename.lower().endswith(('.png', '.jpg', '.jpeg', '.bmp', '.gif', '.tiff', '.webp')):
        continue  # 이미지 파일만 처리

    new_name = filename
    for keyword in keywords_to_remove:
        new_name = new_name.replace(keyword, '')

    new_name = new_name.replace('__', '_').replace('..', '.').strip('_')  # 불필요한 구분자 정리

    if new_name != filename:
        src = os.path.join(folder_path, filename)
        dst = os.path.join(folder_path, new_name)
        os.rename(src, dst)
        print(f"Renamed: {filename} -> {new_name}")
