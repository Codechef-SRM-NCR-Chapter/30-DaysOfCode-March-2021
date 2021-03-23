def createTargetArray(nums,index):
    l,ans=len(nums),[]
    for i in range(l):
        ans.insert(index[i],nums[i])
    print (ans)
nums=[]
index=[]
print("Enter nums: ")
for i in range(5):
    element=int(input())
    nums.append(element)
print("Enter index: ")
for i in range(5):
    elem=int(input())
    index.append(elem)
createTargetArray(nums,index)