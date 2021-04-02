def count_Binary_One(arr,low,high):
	
	if high>=low:

		mid = low + (high-low)//2
		if ((mid == high or arr[mid+1]==0) and (arr[mid]==1)):
			return mid+1

		if arr[mid]==1:
			return count_Binary_One(arr, (mid+1), high)

		return count_Binary_One(arr, low, mid-1)
	
	return 0


arr=list(map(int, input("Enter NUMS with space: ").split()))
print ("Count of 1's in given array is",count_Binary_One(arr, 0 , len(arr)-1))
