import numpy as py
import sys

print("Input: ",end="")

n = int(input("N: "))
x = int(input("X: "))

arr = py.array(input("Arr[] (give space after each number/digit) = ").split()).astype(int)
if len(arr) > n:
    print("invalid length, try again")
    sys.exit()
    
arr.sort()
c = 0

def count(n,x,c):
    
    for i in range(0,len(arr)-2):
        
        for j in range(i+1,len(arr-1)):
            
            for k in range(j+1, len(arr)):
                
                if ((arr[i] + arr[j] + arr[k]) < x):
                    c+=1
    return c             
                    
print("Output:",count(n,x,c))
