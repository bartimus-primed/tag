from pathlib import Path
from os import popen, chdir


deps = []
# Build libs
chdir("lib")
lib_path = Path()
for f in lib_path.glob("*.c"):
    obj_name = f.name.replace(".c", ".o")
    deps.append(f"obj/{obj_name}")
    popen("gcc -c {} -o ../obj/{}".format(f, obj_name)).close()

chdir("..")
popen("gcc main/tag.c {} -o tag.exe".format(" ".join([x for x in deps])))
