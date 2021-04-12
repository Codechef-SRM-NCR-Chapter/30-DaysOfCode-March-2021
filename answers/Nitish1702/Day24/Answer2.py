import numpy as np
n=np.array(list(map(int,input().split(' '))))
c=0
def dec():
    global n
    global c
    for i in range(len(n)):
        if n[i]%2!=0:
            n[i]-=1
            c+=1
            
    return n,c
def func():
    global n
    global c
    dec()
    if set(n)!={0.0}:
        n=n/2
        c+=1
    if set(n)=={0.0}:
        return 'yes'
    else:
        func()
    
func()
print(c)
