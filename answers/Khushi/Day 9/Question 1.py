def twoSum(num,target):
    required={}
    for i in range(len(num)):
        if target-num[i] in required:
            print([required[target-num[i]],i])
        else:
            required[num[i]]=i
n=int(input("Enter no of elements: "))
arr=[]
print("Enter array:")
for i in range(n):
    elem=int(input())
    arr.append(elem)
t=int(input("Enter target: "))
print("Output: ",end=" ")
twoSum(arr,t)