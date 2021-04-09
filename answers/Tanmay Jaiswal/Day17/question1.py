import numpy as py
import sys

print("Input: ")

n = int(input("N: "))
k = int(input("K: "))
arr = py.array(input("Arr[] (give space after each digit) = ").split()).astype(int)

if len(arr) > n:
    print("Enter number of the length",n)
    sys.exit()

arr.sort()
result = []

def sum(n,k,result):
    for i in range(len(arr)-3):
        if arr[i] == arr[i - 1] and i>0:
                continue
        for  j in range(i+1,len(arr)-2):
            if arr[j]==arr[j-1] and j>i+1:
                    continue
            l,r = j+1,len(arr)-1
            while l<r:
                    sum = arr[i]+arr[j]+arr[l]+arr[r]
                    
                    if sum == k:
                        result.append((arr[i],arr[j],arr[l],arr[r]))
                        while l<r and arr[l] == arr[l+1]:l+=1
                        while l<r and arr[r] == arr[r-1]:r-=1
                        l+=1
                        r-=1
                        
                    elif sum>k:
                        r-=1
                        
                    else: l+=1
    return result

print("Output:",sum(n,k,result))
