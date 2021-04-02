import numpy as py

print("Input: ",end="")

arr = py.array(input().split()).astype(int)

def count(arr, low, high):
    
    while high >= low:
        mid = (high + low)//2
        
        if (arr[mid] == 1 and (mid == 0 or arr[mid - 1] == 0)):
            return mid
        
        if arr[mid]==1:
            high = mid-1
        
        else:
            low = mid+1
    
    return -1

print("Output:",count(arr, 0, len(arr)-1))
