import numpy as np
N = int(input())
X = int(input())
arr = np.array(input().split()).astype(int)
c = 0
for i in range(N):
    for j in range(i+1,N):
        for k in range(j+1,N):
            if(arr[i]+arr[j]+arr[k]<X):
                c += 1
print(c)
