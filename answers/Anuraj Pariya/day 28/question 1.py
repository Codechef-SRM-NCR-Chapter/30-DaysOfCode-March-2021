def set_sum(arr, sums, index, res):
    if index >= len(arr) or sums < 0:
        
        return False
    
    if sums == 0:
        return True
    
    res.append(arr[index])
    
    if set_sum(arr, sums-arr[index], index+1, res):
        return True
    
    del res[-1]
    return set_sum(arr, sums, index+1, res)


num = int(input('enter num'))
arr = [x for x in range(1, num+1)]
sums, res1, res2 = sum(arr), [], []

if sums % 2 == 1:
    print('No')
    quit()
    
elif set_sum(arr, sums/2, 0, res1):
    for i in arr:
        if not i in res1:
            res2.append(i)
            
    print(f'Yes\n{len(res1)}\n{res1}\n{len(res2)}\n{res2}')
else:
    print('No')
