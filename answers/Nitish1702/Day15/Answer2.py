import numpy as np
m=int(input('m: '))
n=int(input('n: '))
l=[m,n]
t=l[0]
d=l[1]
def trace(m,n):
    
    if m>=0 and n>=0:
        if m==0 and n==0:
            return 0
        elif m==0 or n==0:
            return 1
        
        return trace(m-1,n)+trace(m,n-1)

print(trace(m-1,n-1))
