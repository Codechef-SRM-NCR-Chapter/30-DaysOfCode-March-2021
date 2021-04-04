n = int(input("N= "))
arr=list(map(int,input().strip('{} ').split(',')))
res = 0
for i in range(n):
    add = 0
    for j in range(i, n):
        add += arr[j]
        if add == 0:
            res += 1

print(res)
