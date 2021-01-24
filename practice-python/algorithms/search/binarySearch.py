def binarysearch(mylist, target, start, stop):
    if start > stop:
        return False
    else:
      middle = (start + stop) // 2
      if target == mylist[middle]:
          return middle
      elif target < mylist[middle]:
          return binarysearch(mylist, target, start, middle - 1)
      else:
          return binarysearch(mylist, target, middle + 1, stop)
          
mylist = [10, 12, 13, 15, 20, 24, 27, 33, 42, 51, 57, 68, 70, 77, 79, 81]
target = 20
start = 0
stop = len(mylist)

x = binarysearch(mylist, target, start, stop)

if x == False:
    print("Item ", target , "Not found!")
else:
    print("Item ", target, "Found at index ", x)
