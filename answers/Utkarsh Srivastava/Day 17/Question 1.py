import numpy as np
N,K = map(int,input().split())
arr = np.array(input().split()).astype(int)
for i in range(N):
    for j in range(i+1,N):
        if(sum(arr[i:j])==K and len(arr[i:j])==4):
            print(arr[i:j])
