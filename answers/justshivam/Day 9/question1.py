def calculate(arr, target):
    l = len(arr)
    for i in range(l):
        for j in range(l):
            if i == j:
                continue
            elif arr[i] + arr[j] == target:
                return [i, j]


nums = [int(x) for x in input('Enter NUMS seprated by space: ').split()]
target = int(input('Enter the target value: '))
print(calculate(nums, target))
