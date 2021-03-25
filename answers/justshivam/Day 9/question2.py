def calculate(arr):
    cur = 0
    res = 0
    for i in arr:
        cur = max(0, cur) + i
        res = max(res, cur)
    return max(arr) if res == 0 else res


nums = [int(x) for x in input('Enter NUMS seperated by space: ').split()]
print(calculate(nums))
