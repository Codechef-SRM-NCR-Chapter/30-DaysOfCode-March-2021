import numpy as np
def conv(n):
    return int(n)

arr= np.array(list(map(conv,input())))
indx= list(range(1,len(arr)+1))
raw= arr**indx
print(raw.sum())
