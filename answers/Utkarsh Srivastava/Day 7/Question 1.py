import numpy as np
nums = np.array(input("Enter nums ").split())
index = np.array(input("Enter index ").split())
target = []
nums = nums.astype(int)
index = index.astype(int)
for i in range(len(index)):
    a = index[i]
    target.insert(a,nums[i])
print(target)
