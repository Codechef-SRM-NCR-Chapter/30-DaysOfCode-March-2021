def add(arr1, arr2, index=0):
    if index < len(arr1):
        return [arr1[index] + arr2[index]] + add(arr1, arr2, index+1)
    return []


arr1 = [int(x) for x in input('Enter first array: ').split()]
arr2 = [int(x) for x in input('Enter second array: ').split()]
print(add(arr1, arr2))
