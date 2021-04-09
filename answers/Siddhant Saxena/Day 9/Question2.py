d=0
sum=0
nums=[]
x=0
y=0

n=int(input("enter the length of array"))
for i in range(n):
    d=int(input("enter the element"))
    nums.append(d)
for i  in range(n):
    for j in range(n):
        sum=0
        for k in range(i,j+1):
            sum+=nums[k]
            if d<sum:
                d=sum
                x=i
                y=j

print(d)
for i in range(x,y+1):
    print(nums[i],",",end="")


