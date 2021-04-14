def check(arr, total, index, res):
    if index >= len(arr) or total < 0:
        return False
    if total == 0:
        return True
    res.append(arr[index])
    if check(arr, total-arr[index], index+1, res):
        return True
    del res[-1]
    return check(arr, total, index+1, res)


num = int(input())
arr = [x for x in range(1, num+1)]
total, res1, res2 = sum(arr), [], []
if total % 2 == 1:
    print('No')
    quit()
elif check(arr, total/2, 0, res1):
    for i in arr:
        if not i in res1:
            res2.append(i)
    print(f'Yes\n{len(res1)}\n{res1}\n{len(res2)}\n{res2}')
else:
    print('No')
