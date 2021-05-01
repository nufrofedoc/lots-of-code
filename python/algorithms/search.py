
def search(list, n):
    i = 0

    while (i < len(list)):
        if list[i] == n:
            return True
        i = i + 1

list = [5,5,4,28,193,18]
n = 18

if search(list, n):
    print('Found')
else:
    print('Not found')
