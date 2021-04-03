le = int(input("Enter N: "))
target = int(input("Enter K: "))
arr = [int(x) for x in input('Enter ARR Sperated by space: ').split()][:le]
res = []

arr.sort()

for i in range(le - 3):
    for j in range(i + 1, le - 2):
        k = target - (arr[i] + arr[j])
        low = j + 1
        high = le - 1
        while low < high:
            if arr[low] + arr[high] < k:
                low = low + 1
            elif arr[low] + arr[high] > k:
                high = high - 1
            else:
                print(f"{arr[i]} {arr[j]} {arr[low]} {arr[high]} $")
                (low, high) = (low + 1, high - 1)
