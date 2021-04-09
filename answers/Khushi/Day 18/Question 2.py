def cbit(a):
    count=0
    while(a):
        if(a & 1):
            count+=1
        a=a>>1
    return count

def sortByBit(arr,n):
    count=[[] for i in range(32)]
    setbit=0
    for i in range(n):
        setbit=cbit(arr[i])
        count[setbit].append(arr[i])
    j=0
    for i in range(31,-1,-1):
        x=count[i]
        for i in range(len(x)):
            arr[j]=x[i]
            j+=1

def printArr(arr,n):
    print(arr)

arr=[]
n=int(input("Enter the no. of elements: "))
for i in range(n):
    elem=int(input())
    arr.append(elem)
sortByBit(arr,n)
print("OUTPUT:")
printArr(arr,n)
