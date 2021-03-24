from collections import Counter


def calculate(arr):
    dic = Counter(arr)
    res = []
    for i in dic:
        if dic[i] == 1:
            res.append(i)
    return sum(res)


nums = [int(x) for x in input('Enter NUMS seprated by space: ').split()]
print(calculate(nums))
