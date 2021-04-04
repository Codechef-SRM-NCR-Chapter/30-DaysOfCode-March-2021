import numpy as py

print("Input: ",end="")
arr = py.array(input("ARR[] = ").split()).astype(int)

n = len(arr)

def countbits(a): 
    count = 0
    while (a): 
        if (a & 1): 
            count+= 1
        a = a>>1
  
    return count

def insertionsort(arr,aux, n): 
    for i in range(1,n,1): 
        key1 = aux[i] 
        key2 = arr[i] 
        j = i-1
  
        while (j >= 0 and aux[j] < key1): 
            aux[j+1] = aux[j] 
            arr[j+1] = arr[j] 
            j = j-1
  
        aux[j+1] = key1 
        arr[j+1] = key2 

def sortbysetbitcount(arr, n): 
    aux = [0 for i in range(n)] 
    for i in range(0,n,1): 
        aux[i] = countbits(arr[i]) 
  
    insertionsort(arr, aux, n)
    
def printarr(arr, n): 
    for i in range(0,n,1): 
        print(arr[i],end = " ")

        
print("Output: ",end="")

sortbysetbitcount(arr, n)
printarr(arr, n)
