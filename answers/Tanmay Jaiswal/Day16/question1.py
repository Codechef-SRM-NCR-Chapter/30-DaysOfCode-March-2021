import numpy as py

print("Input: ",end="")

arr = py.array(input().split()).astype(int)

def count(arr, low, high):
    
    if high >= low:
        mid = low + (high - low)//2
        
        if ((mid == high or arr[mid+1]==0) and (arr[mid]==1)):
            return mid+1
        
        if arr[mid]==1:
            return count(arr, (mid+1), high)
        
        return count(arr, low, mid-1)
    
    return 0

print("Output:",count(arr, 0, len(arr)-1))
