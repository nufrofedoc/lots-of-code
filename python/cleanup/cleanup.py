import os
import time

DAYS = 5    # Maximal age of file to stay, older will be deleted
FOLDERS = [
            "G:\Musorka\HLAM"
          ]

TOTAL_DELETED_SIZE = 0    # Total deleted size of all files
TOTAL_DELETED_FILE = 0    # Total deleted files
TOTAL_DELETED_DIRS = 0    # Total deleted empty folders

#======================MAIN========================
starttime = time.asctime()

for folder in FOLDERS:
    delete_old_files(folder)    # Delete old files
    delete_empty_dir(folder)    # Delete empty folders


finishtime = time.asctime()


print("------------------------------------------------------")
print"START TIME: "                   + str(starttime))
print("Total Deleted Size: "          + str(TOTAL_DELETED_SIZE/1024/1024) + "MB")
print("Total Deleted files: "         + str(TOTAL_DELETED_FILE))
print("Total Deleted Empty folders: " + str(TOTAL_DELETED_DIRS))
print("FINISH TIME: "                 + str(finishtime))
print("------------------------------------------------------")
