n = int(input("Input n: "))


def sumpw(x, n):
    s = 0
    for i in str(x):
        s += int(i)**n
    return s
while n > 0:
    for i in range(10**(n-1), 10**n-1):
        if i == sumpw(i, n):
            print(i, end=' ')
    break
