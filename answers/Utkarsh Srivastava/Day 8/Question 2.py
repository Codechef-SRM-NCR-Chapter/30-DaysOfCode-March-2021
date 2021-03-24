import numpy as np
arr = np.array(input().split())
arr = arr.astype(int)
c = []
s = 0
for i in range(len(arr)):
    for j in range(i+1,len(arr)):
        c.append((arr[i],arr[j]))
for i in range(int(len(c))):
    a = min(c[i])+min(c[len(c)-i-1])
    if(a>s):
        s = a
print(s)
