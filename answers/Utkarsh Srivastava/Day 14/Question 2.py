import numpy as np
def array_sum(arr1,arr2):
    temp = 0
    if(arr1.size != 0):
        temp += arr1[0]
    if(arr2.size != 0):
        temp += arr2[0]
    if(arr1.size == 0 and arr2.size == 0):
        return lst    
    lst.append(temp)
    return array_sum(arr1[1:],arr2[1:])
arr1 = np.array(input().split()).astype(int)
arr2 = np.array(input().split()).astype(int)
lst = []
print(array_sum(arr1,arr2))
