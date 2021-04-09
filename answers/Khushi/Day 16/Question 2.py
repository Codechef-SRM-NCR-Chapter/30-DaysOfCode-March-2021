def TransitionPoint(arr,n):
    l=0
    u=n-1
    while(l<=u):
        mid=(int)((l+u)/2)
        if(arr[mid]==0):
            l=mid+1
        elif(arr[mid]==1):
            if (mid==0 or (mid>0 and arr[mid-1]==0)):
                return mid
            u=mid-1
    return -1

n=int(input("Enter length of array:"))
arr=[]
for i in range(n):
    elem=int(input())
    arr.append(elem)
p=TransitionPoint(arr,n);
if(p>=0):
    print("OUTPUT:",p)
else:
    print("No Transition Point")
