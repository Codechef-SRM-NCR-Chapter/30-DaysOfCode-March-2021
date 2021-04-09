def recursionsum(n):
    if n == 0:
        return 0
    return(n % 10 + recursionsum(int(n/10)))

x = int(input("Enter numbers: "))
m = recursionsum(x)

print(m)
