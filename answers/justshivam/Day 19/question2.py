n, x, arr = int(input('Enter N: ')), int(input('Enter X: ')), [
    int(i) for i in input('Enter ARR seprated by space: ').split()]
count = 0
for i in range(0, n-2):
    for j in range(i+1, n-1):
        for k in range(j+1, n):
            if arr[i] + arr[j] + arr[k] < x:
                count += 1
print(x)
