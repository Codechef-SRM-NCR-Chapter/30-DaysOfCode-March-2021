import numpy as py
import sys

print("Input:",end=" ")
n = int(input("N: "))

arr = py.array(input("Arr[] (give space after each number/digit): ").split()).astype(int)
l = len(arr)
if l<n or l>n:
    print("Enter number of length:",n)
    sys.exit()
    
arr.sort()
a,b = 0,0

for i in range(l):
    if i%2 == 0:
        a = a*10 + arr[i]
    else:
        b = b*10 + arr[i]

sum = a + b
print("\nOutput:",sum)
