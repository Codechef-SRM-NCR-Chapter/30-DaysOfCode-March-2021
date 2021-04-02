def countOne(arr,s,b):
    if b>=s:
        mid=s+((b-s)//2)
        if ((mid==b or arr[mid+1]==0) and (arr[mid]==1)):
            return mid+1
        if arr[mid]==1:
            return countOne(arr,(mid+1),b)
        return countOne(arr,s,mid-1)
    return 0

n=int(input("Enter no. of elements in array: "))
arr=[]
print("Enter array in non-increasing order:")
for i in range(n):
    elem=int(input())
    arr.append(elem)
print("OUTPUT:",countOne(arr,0,n-1))