ins, arr, res = [int(x) for x in input().split()], [int(x)
                                                    for x in input().split()], []
arr.extend(arr)
arr = arr[ins[0]-ins[1]:(2*ins[0])-ins[1]]
for i in range(ins[2]):
    res.append(arr[int(input())])
for i in res:
    print(i)
