def One(arr,l,h):
    if h>=l:
        mid = l +(h-l)//2
        if ((mid == h or arr[mid+1]==0) and (arr[mid]==1)):
            return mid+1
        if arr[mid]==1 :
            return One(arr, (mid+1), h)
        return One(arr, l, mid-1)
        return 0

arr=list(map(int,input().strip('{} ').split(',')))
print (One(arr, 0 , len(arr)-1))

