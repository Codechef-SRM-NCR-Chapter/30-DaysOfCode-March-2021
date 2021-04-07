def minSum(arr,n):
    arr.sort()
    a=0
    b=0
    for i in range(n):
        if(i%2!=0):
            a=a*10+arr[i]
        else:
            b=b*10+arr[i]
    return a+b

arr=[]
n=int(input("Enter length of array:"))
print("Enter array:")
for x in range(n):
    elem=int(input())
    arr.append(elem)
print("OUTPUT:",minSum(arr,n))