n= int(input("Enter number of integers: "))
def find(n):
	arr = [''] * (n + 1)
	size = 1
	m = 1
	while (size <= n):
		i = 0
		while(i < m and (size + i) <= n):
			arr[size + i] = "1" + arr[size - m + i]
			i += 1
		i = 0
		while(i < m and (size + m + i) <= n):
			arr[size + m + i] = "2" + arr[size - m + i]
			i += 1
		m = m << 1
		size = size + m
	print(arr[n])

for i in range(1, n+1):
	find(i)
