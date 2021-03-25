import numpy as np
nums = np.array(input().split())
nums = nums.astype(int)
target = int(input())
for i in range(len(nums)):
    for j in range(i+1,len(nums)):
        if(nums[i]+nums[j]==target):
            print([i,j])
