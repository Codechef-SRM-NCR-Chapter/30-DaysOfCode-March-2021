arr = list(map(int, input("ENTER ARRAY  ").split()))
n = len(arr)
N = int(input('Enter N= '))
res = 0
for i in range(n):
	summ = 0			
	for j in range(i, n):
		summ += arr[j]
		if summ == N:
			res += 1

print(res)
