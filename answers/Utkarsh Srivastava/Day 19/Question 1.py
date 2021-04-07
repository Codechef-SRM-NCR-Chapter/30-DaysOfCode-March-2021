import numpy as np
N = int(input())
arr = np.array(input().split()).astype(int)
a = np.arange(1,N+1)
for i in range (N):
    for j in range(i+1,N):
        if(arr[i]==arr[j]):
            print(arr[i],end=" ")
            break
print(int(np.setdiff1d(a,arr)))        
