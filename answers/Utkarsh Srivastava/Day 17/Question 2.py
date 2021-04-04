import numpy as np
N = int(input())
arr = np.array(input().split()).astype(int)
for i in range(N+1):
    for j in range(i+1,N+1):
        if(sum(arr[i:j])==0):
            print(arr[i:j])
