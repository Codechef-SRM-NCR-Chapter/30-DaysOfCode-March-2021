def count_Triplets_sum(arr, n, sum):
	ans = 0
	for i in range( 0 ,n-2):
		for j in range( i+1 ,n-1):
			for k in range( j+1, n):
				if (arr[i] + arr[j] + arr[k] < sum):
					ans+=1
	
	return ans


arr = list(map(int,input('enter arr with space').split()))
n = len(arr)
X=int(input('enter sum ' 'X='))
print(count_Triplets_sum(arr, n, X))
