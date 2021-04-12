size= int(input("Size of array: "))
arr=input("Enter the elements of array: ").split()
t=0
arr[0]=int(arr[0])
for i in range(1,size):
    arr[i]=int(arr[i])
    while arr[i]<arr[i-1]:
        t+=1
        arr[i]+=1
print(t)
