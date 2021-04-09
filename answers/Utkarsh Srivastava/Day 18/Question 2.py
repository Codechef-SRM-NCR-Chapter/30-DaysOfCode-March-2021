import numpy as np
arr = np.array(input().split()).astype(int)
sort = []
l = len(arr)
for k in range(l):
    max = 0
    for i in range(l):
        temp = 0
        binnum = bin(arr[i])
        for j in binnum:
            if(j=='1'):
                temp = temp+1
        if(temp>max):
            max = temp
            c = i
    if(arr[c]!=0):
        sort.append(arr[c])
        arr[c]=0
print(sort)
