import numpy as np
arr = np.array(input().split())
for i in range(len(arr)):
    if(arr[i]=='1'):
        print(i)
        break
