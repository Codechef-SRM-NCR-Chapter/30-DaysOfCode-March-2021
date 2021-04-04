n = int(input("Enter N: "))
arr = [int(x) for x in input("Enter ARR seprated by space: ").split()][:n]
res = 0

for i in range(n):
    add = 0
    for j in range(i, n):
        add += arr[j]
        if add == 0:
            res += 1

print(res)
