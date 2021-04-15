print("Input: ",end="")
a, b, t = 2020, 2021, int(input())

for i in range(t):
    n = int(input("\n"))

    def sum(x, a, b, check, n):

        if x > n:
            return

        if check[x]:
            return

        check[x] = True

        sum(x + a, a, b, check, n)
        sum(x + b, a, b, check, n)

    def sumPossible(n, a, b):
        check = [False] * (n + 1)
        sum(0, a, b, check, n)
        return check[n]

    if sumPossible(n, a, b):
        print("Output: YES")
    else:
        print("Output: NO")
