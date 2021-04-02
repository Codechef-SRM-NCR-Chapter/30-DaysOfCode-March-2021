def count(arr, low, high):

    if high >= low:
        mid = low + (high-low)//2
        if ((mid == high or arr[mid+1] == 1) and (arr[mid] == 0)):
            return mid + 1
        if arr[mid] == 0:
            return count(arr, (mid+1), high)
        return count(arr, low, mid-1)
    return 0


arr = [int(x) for x in input('Enter ARR sepreated by space: ').split()]
print(count(arr, 0, len(arr)-1))
