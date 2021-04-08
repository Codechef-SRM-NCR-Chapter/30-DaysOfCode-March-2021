nums, arr = [int(x) for x in input().split()], [int(x)
                                                for x in input().split()]
res = arr[:nums[1]][::-1]
res.extend(arr[nums[1]:])
print(' '.join([str(x) for x in res]))
