import numpy as np
arr = np.array(input().split())
arr = arr.astype(int)
c = s = 0
for i in range(len(arr)):
    for j in range(len(arr)):
        if(arr[i]==arr[j] and i!=j):
            c = 0
            break
        else:
            c = arr[i]
    s = s+c
    c = 0
print(s)
