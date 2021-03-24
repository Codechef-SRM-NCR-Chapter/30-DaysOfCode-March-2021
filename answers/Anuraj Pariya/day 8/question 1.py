arr = input('enter array')
nums= arr.split()
nums = [int(i) for i in nums]
unique = []
for i in nums:
    if nums.count(i) > 1:
        while i in nums:
            nums.remove(i)
sums = 0
for j in range (0 , len(nums)):
    sums = sums + nums[j]
print(sums)
