def min_moves(arr, n):
	maxVal = max(arr)
	return maxVal

arr = list(map(int,input('entr arr').split()))
n = len(arr)

print(min_moves(arr, n))
