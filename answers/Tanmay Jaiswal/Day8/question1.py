def unique(arr):
    sum=0
    arr.sort()
    out=[]
    l=len(arr)
    
    if arr[0] != arr[1]:
        out.append(arr[0])

    for i in range(1,l-1):
        if (arr[i] != arr[i-1] and arr[i] != arr[i+1]):
            out.append(arr[i])
     
    if arr[l-2] != arr[l-1]:
        out.append(arr[l-1])
        
    for j in out:
        sum = sum + j
    return sum

arr = list(map(int, input("Nums(kindly, give space after each number): ").split()))

print("Sum is",unique(arr))
