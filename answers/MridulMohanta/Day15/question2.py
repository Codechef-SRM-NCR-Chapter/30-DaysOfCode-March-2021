def numpaths(m , n):
    if m == 1 or n == 1:
        return 1
    return numpaths(m -1 , n) + numpaths(m, n-1)

m = int(input("M: "))
n = int(input("N: "))

print(numpaths(m , n))
