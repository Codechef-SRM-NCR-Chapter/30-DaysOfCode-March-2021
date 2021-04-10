arr = [int(x) for x in input().split()]
count, l = 0, len(arr)
while(True):
    for i in range(l):
        if arr[i] % 2 == 1:
            arr[i] -= 1
            count += 1
    if list(set(arr))[-1] == 0:
        break
    for i in range(l):
        arr[i] //= 2
    count += 1
print(count)
