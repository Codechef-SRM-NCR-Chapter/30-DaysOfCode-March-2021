res = []
for i in range(int(input())):
    props, resb = [int(x) for x in input().split()], True
    arr1, arr2 = [int(x) for x in input().split()], [int(y)
                                                     for y in input().split()]
    arr2 = arr2[::-1]
    for j in range(props[0]):
        if not arr1[j] + arr2[j] <= props[1]:
            resb = False
            break
    res.append('Yes' if resb else 'No')
for i in res:
    print(i)
