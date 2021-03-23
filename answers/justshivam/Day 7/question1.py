nums = [int(x) for x in input('Enter NUMS seprated by space: ').split()]
index = [int(x) for x in input('Enter INDEX seprated by space: ').split()]
l = len(nums)
result = []
for i in range(l):
    if index[i] >= len(result):
        result.append(nums[i])
    else:
        result.insert(index[i], nums[i])
print(result)
