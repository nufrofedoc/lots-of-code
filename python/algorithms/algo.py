# Course Korman Algoithms
import math as m

def DefineHypo(a, b):
    return round(m.sqrt(a**2 + b**2))

hypo = DefineHypo(4, 3)
print(hypo)

arrNumbers = [1, 2, 3, 5]

def Sum(arrNumbers):
    x = 0
    summ = 1
    for x in range(x, len(arrNumbers)):
        summ = summ * arrNumbers[x]
        return summ

Sum(arrNumbers)

def Search(arrNames, name):
    i = 0
    while (i < len(arrNames)):
        if (arrNames[i] == name):
            print('Success')
        else:
            print('Not found')
        
        i = i + 1
name = 'Con'
arrNames = ['Ronny', 'Marry', 'Marko', 'Con', 'Ron', 'Molly']

Search(arrNames, name)
