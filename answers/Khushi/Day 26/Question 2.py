def nonDecreasing(a,n):
    s=0
    d=0
    b=0
    for i in range(n):
        if(b>a[i]):
            d=b-a[i]
            s+=d
        b=a[i]
    return s

n=int(input("Enter size of array:"))
arr=[]
print("Enter elements of array:")
for x in range(n):
    elem=int(input())
    arr.append(elem)
print("OUTPUT:",nonDecreasing(arr,n))