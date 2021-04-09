result = []
def array_sums(arr1 , arr2 , i=0):
    global result
    l1=len(arr1)
    l2=len(arr2)
    while i<l1 and i<l2:
        sums=arr1[i]+arr2[i]
        result.append(sums)
        return array_sums(arr1,arr2,i+1)
    while i<l1:
        result.append(arr1[i])
        i+=1
    while i<l2:
        result.append(arr2[i])
        i+=1
    return result
a=list(map(int, input("Enter NUMS with space: ").split()))
b=list(map(int, input("Enter NUMS with space: ").split()))
print(array_sums(a,b))
