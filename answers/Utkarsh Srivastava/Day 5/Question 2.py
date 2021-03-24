from sympy import *
s = 1
n = int(input())
for i in range(n):
    for j in range(i):
        if(isprime(s)):
            print("#",end="")
        else:
            print("*",end="")
        s+=1
    print()
