def countSetBits(val):
    cnt = 0
    while val:
        cnt += val % 2
        val = val//2
    return cnt


arr = [int(i) for i in input("Enter ARR seprated by space: ").split()]
l = len(arr)
arr = [(arr[i], i) for i in range(l)]


res = sorted(arr,
             key=lambda tup:
             (countSetBits(tup[0]), l-tup[1]),
             reverse=True)
res = [x[0] for x in res]
print(' '.join(str(x) for x in res))
