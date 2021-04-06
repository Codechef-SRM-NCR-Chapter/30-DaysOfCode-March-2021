l, arr = int(input('Enter N: ')), [int(x) for x in input(
    'Enter ARR seperated by space: ').split()]
miss, rep = -1, -1
con1, con2 = False, False
arr = sorted(arr)
for i in range(l):
    if con1 and con2:
        break
    if (not con1) and (not arr[i] == i + 1):
        miss = i + 1
        con1 = True
    if not con2 and arr[i] == arr[i+1]:
        rep = arr[i]
        con2 = True
print(f'{rep} {miss}')
