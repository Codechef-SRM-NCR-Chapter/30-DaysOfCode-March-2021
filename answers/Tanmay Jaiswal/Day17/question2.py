import numpy as py
import sys

print("Input: "
      ,end="")

n = int(input("N: "))
arr = py.array(input("Arr[] (give space after each digit) = ").split()).astype(int)

if len(arr) > n:
    print("Enter number of the length",n)
    sys.exit()
    
k = 0
count = 0

for i in range(len(arr)):
    sum = 0
    
    for j in range(i,n):
        sum += arr[j]
        
        if sum == k:
            count += 1
print("Output:",count)
