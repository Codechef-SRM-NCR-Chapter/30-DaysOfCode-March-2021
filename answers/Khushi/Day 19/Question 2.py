def countTriplet(arr,n,x):
    arr.sort()
    r=0
    for i in range(0,n-2):
        j=i+1
        k=n-1
        while(j<k):
            if(arr[i]+arr[j]+ arr[k]>=x):
                k-=1
            else:
                r+=(k-j)
                j+=1
    return r

n=int(input("Enter size of array: "))
arr=input("Enter array: ").split()
for a in range(n):
    arr[a]=int(arr[a])
x=int(input("Enter sum value: "))
print("OUTPUT:",countTriplet(arr,n,x))
