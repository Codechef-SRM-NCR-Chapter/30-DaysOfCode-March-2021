def calculate(arr):
    n = len(arr)
    arr.sort()
    res = 0
    for i in range(0, n, 2):
        res += arr[i]
    return res


nums = [int(x) for x in input('Enter NUMS seperated by space: ').split()]
print(calculate(nums))
