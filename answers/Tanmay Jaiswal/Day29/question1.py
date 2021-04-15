import numpy as p
import random

print("Input:",end="")
n = int(input())

for m in range(n):
    n,x = p.array(input("\n").split()).astype(int)
    a = p.array(input().split()).astype(int)
    b = p.array(input().split()).astype(int)
    
    for j in range(n):
        for k in range(1,n):
            b[j],b[k] = b[k],b[j]
    
    sum = a+b
    sum.sort()
    
    if sum[-1] <= x:
        print("Output: YES")
    else:
        print("Output: NO")
