def sumOfUnique(nums):
    counts = {}
    for i in nums:
        if i in counts.keys():
            counts[i] += 1
        else:
            counts[i] = 1
    uniques = [k for k, v in counts.items() if v == 1]
    print(uniques)
    return sum(uniques)  
print(sumOfUnique([1, 2, 3, 2]))
