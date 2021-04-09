d=0
nums=[]
target=int(input("enter the target"))
n=int(input("enter the length of array"))
for i in range(n):
    d=int(input("enter the element"))
    nums.append(d)
for i in range(n):
    for j in range(n):
        if nums[i]+nums[j]==target:
             print(i,",",j)
             break


