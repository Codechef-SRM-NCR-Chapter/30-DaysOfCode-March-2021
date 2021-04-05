n=int(input("Enter no. of elements in an array: "))
arr=input("Enter array: ").split()
for i in range(n):
    arr[i]=int(arr[i])
for i in range(n):
    if arr[abs(arr[i])-1]>0:
        arr[abs(arr[i])-1]=-arr[abs(arr[i])-1]
    else:
        x=abs(arr[i])
        print("OUTPUT: ",end="")
        print(x,end=' ')
        break
a=0
for i in range(n):
    a+=abs(arr[i])
a-=x
print(((n*(n+1))//2)-a)
