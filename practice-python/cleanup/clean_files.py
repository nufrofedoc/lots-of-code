import os

PATH = os.getcwd()
EXTENSIONS = ('.o', '.exe')
countFiles = 0

for root, dirs, files in os.walk(PATH):
    for currentFile in files:
        if currentFile.lower().endswith(EXTENSIONS):
            countFiles += 1
            print ("Deleting file: " + os.path.join(root, currentFile))
            os.remove(os.path.join(root, currentFile))
            print("File deleted: " + os.path.join(root, currentFile))
print("Count deleted files:", countFiles)
