def circularArrayRotation(a, c, queries):
    new_arr=a[-c%len(a):]+a[:-c%len(a)]
    result=[]
    for i in queries:
        result.append(new_arr[i])
    return result

if __name__ == '__main__':
    print("Enter length of array,rotation count and number of queries:",end=" ")
    ncq=input().split()
    n=int(ncq[0])
    c=int(ncq[1])
    q=int(ncq[2])
    print("Enter elements of array:",end=" ")
    a=list(map(int,input().rstrip().split()))
    arr=[]
    print("Index of each element in array to return:")
    for x in range(q):
        elem=int(input())
        arr.append(elem)
    result=circularArrayRotation(a,c,arr)
    print("OUTPUT:")
    print('\n'.join(map(str, result)))
