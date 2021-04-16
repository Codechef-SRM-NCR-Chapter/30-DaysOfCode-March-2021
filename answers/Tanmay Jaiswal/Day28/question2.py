import numpy as py

print("Input: ",end="")
t = int(input())

for i in range(t):
    arr = py.array(input("\n").split()).astype(int)
    l,p = arr[0], arr[1]  
    a = [0]*l
    c = 1
    
    if (l % 2 == 0) and p > ((l//2)-1):
        print(-1)
    elif (l % 2 != 0) and (p>l//2):
        print(-1)
    else:
        for i in range(p):
            a[2*i+1] = l-i
            
        for i in range(l):
            if a[i] == 0:
                a[i]=c
                c+=1
                
        print("Output:",end="")
        
        for j in range(len(a)):
            print(a[j],end=" ")
            
        print("\n")
