import numpy as py
import sys

print("Input: ",end="")

n = int(input("N: "))
arr = py.array(input("Arr[] (give space after each number/digit) = ").split()).astype(int)

if len(arr) != n:
    print("invalid length, try again")
    sys.exit()

dup = 0
miss = 0

for i in range(n-1):
    if arr[i] == arr[i+1]:
            dup = arr[i]
    else:
        if (arr[i]+1) not in arr:
                miss = arr[i]+1

print("Output: ",dup,miss)
