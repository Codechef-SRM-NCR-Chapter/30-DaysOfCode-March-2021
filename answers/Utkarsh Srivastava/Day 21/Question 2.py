N = int(input())
arr = list(map(int, input().split()))
arr.sort()
a = b = 0
for i in range(0, N, 2):
    a = a*10 + arr[i]
for i in range(1, N, 2):
    b = b*10 + arr[i]
print(a+b)
