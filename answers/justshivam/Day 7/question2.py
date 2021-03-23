arr = [int(x) for x in input('Enter number seprated by space: ').split()]
a = int(input("Enter value of A: "))
b = int(input("Enter value of B: "))
c = int(input("Enter value of C: "))
l = len(arr)
result = []
for i in range(l):
    for j in range(l):
        if i == j:
            continue
        for k in range(l):
            if (k == i or k == j) or not (i < j < k):
                continue
            if abs(arr[i] - arr[j]) <= a:
                if abs(arr[j] - arr[k]) <= b:
                    if abs(arr[i] - arr[k]) <= c:
                        result.append((arr[i], arr[j], arr[k]))
print(len(result))
