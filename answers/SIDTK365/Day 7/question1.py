# Input for nums first
nums = list(map(int, input().split()))
# Input for index
index = list(map(int,input().split()))
target = []
for i in range(len(index)):
    target.insert(index[i],nums[i])

print(target)
