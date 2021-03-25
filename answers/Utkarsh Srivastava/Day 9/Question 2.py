import numpy as np
nums = np.array(input().split())
nums = nums.astype(int)
c = []
d = []
sum = 0
max = 0
for i in range(len(nums)):
    for j in range(i,len(nums)):
        d = nums[i:j+1]
        c.append(d)
    d = []
for i in (c):
    sum = 0
    for j in (i):
        sum = sum + j
        if (sum>max):
            max = sum
print(max)
