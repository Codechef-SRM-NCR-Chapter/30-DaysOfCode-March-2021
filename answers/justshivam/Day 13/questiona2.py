def calculate(arr, index=0):
    back = - 1 - index
    if arr[index] != arr[back]:
        return False
    elif abs(back) == (index+1):
        return True
    return calculate(arr, index+1)


arr = [int(i) for i in input().split()]
print(calculate(arr))
