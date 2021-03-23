d=0
x=0
arr=[]
n=int(input("enter the no of elements in array"))
for i in range(n):
    m=int(input("enter the elements"))
    arr.append(m)
c=int(input("enter the number of candies"))
for i in range(n):
    arr[i]=arr[i]+c

    arr[i]=d
    x=arr[i]

    for j in range(n):
        if arr[j]>d:
            d=arr[j]
    if d==x:
        print("true")

    else:
        print("false")
