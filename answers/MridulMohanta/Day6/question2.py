a = input("")
arr = a.split()
arr = [int(i) for i in arr]

def arrsum(a):
    sum = 0
    for i in range(0, len(a)):
        sum += ((((i + 1)*(len(a) - i) + 1) // 2) *a[i])

    return sum
print(arrsum(arr))
