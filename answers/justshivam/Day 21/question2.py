arr = [int(x) for x in input('Enter ARR sperated by space: ').split()]
arr.sort()
l, dig1, dig2 = len(arr), '', ''
for i in range(0, l, 2):
    dig1 += str(arr[i])
    if i + 1 < l:
        dig2 += str(arr[i+1])
print(int(dig1) + int(dig2))
