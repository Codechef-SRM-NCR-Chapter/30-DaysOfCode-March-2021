nums = list(map(int, input("Enter NUMS with space: ").split()))
index = list(map(int,input("Enter INDEX with space: ").split()))
target = [ ]
for i in range(len(index)):
    target.insert(index[i],nums[i])
print("OUTPUT: ",target)
