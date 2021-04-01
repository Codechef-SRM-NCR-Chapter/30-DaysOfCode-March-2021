def count(x, y):
    if x == 1 or y == 1:
        return 1
    return count(x-1, y) + count(x, y-1)


m = int(input('Enter value of m: '))
n = int(input('Enter value of n: '))
print(count(m, n))
