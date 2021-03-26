arr = input("Enter")
nums = arr.split()
nums = [int(i) for i in nums]
unique = []

for x in nums:
    if nums.count(x) > 1:
        while x in nums:
            nums.remove(x)

total = 0

for i in range(0 , len(nums)):
    total = total + nums[i] 

print(total)
    
