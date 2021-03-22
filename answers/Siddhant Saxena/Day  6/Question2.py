
arr=[]
sum=0
n=int(input("enter the no of elements in array"))
for i in range(n):
    m=int(input("enter the elements"))
    arr.append(m)
for i in range(0,n):
    for j in range(i,n,2):
        for k in range(i,j+1):
            sum+=arr[k]

print(sum)
