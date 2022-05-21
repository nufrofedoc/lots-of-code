if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())

compList = [[i,j,k] for i in range(x+1) for j in range(y+1) for k in range(z+1) if i+j+k != n]

'''
for i in range(x+1):
    for j in range(y+1):
        for k in range(z+1):
            if i+j+k != n:
                compList.append([i, j, k])
'''
            
print(compList)

# What is the permutations and combinations?
# Permutaions is set of objects n * n * n in the right order.
# Combinations is set of objects n * n * n the order doesn't it matter.
