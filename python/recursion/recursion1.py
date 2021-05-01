def Greetings(x):
    if x == 0:
        return
    else:
        print("Hello")
        Greetings(x-1)

#Greetings(10)


def sum(x):
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        return x + sum(x-1)

z = sum(5)
#print(z)

def factorial(x):
    if x == 0:
        return 1
    else:
        return x * factorial(x-1)

#print(factorial(5))

def fibo(x):
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        return fibo(x-1) + fibo(x-2)

print(fibo(10))
