nums = input("Enter the numbers: ").split()
index = input("Enter the index values : ").split()
a = len(nums)

l = []
for i in range(0,a):
    l.insert(int(index[i]), int(nums[i]))
print(l)
