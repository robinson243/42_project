import os

# Mets ici le chemin du dossier
dir_path = "."

# Extensions à utiliser
video_ext = ".mp4"
subtitle_ext = ".srt"

# Récupère et trie tous les fichiers vidéo et sous-titres
video_files = sorted([f for f in os.listdir(dir_path) if f.endswith(video_ext)])
subtitle_files = sorted([f for f in os.listdir(dir_path) if f.endswith(subtitle_ext)])

# Renomme chaque sous-titre pour correspondre au nom du fichier vidéo
for vid, sub in zip(video_files, subtitle_files):
    base_name = os.path.splitext(vid)[0]
    new_sub_name = base_name + subtitle_ext
    old_sub_path = os.path.join(dir_path, sub)
    new_sub_path = os.path.join(dir_path, new_sub_name)
    os.rename(old_sub_path, new_sub_path)

print("Renommage terminé !")
