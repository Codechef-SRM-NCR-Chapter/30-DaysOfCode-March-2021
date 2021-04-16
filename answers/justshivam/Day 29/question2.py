def checkIfPossibleRec(x, isPossible, n):
    if x > n:
        return
    if isPossible[x]:
        return
    isPossible[x] = True
    checkIfPossibleRec(x + num1, isPossible, n)
    checkIfPossibleRec(x + num2, isPossible, n)


num1, num2, res = 2020, 2021, []
for i in range(int(input())):
    n = int(input())
    isPossible = [False] * (n + 1)
    checkIfPossibleRec(0, isPossible, n)
    res.append("Yes" if isPossible[n] else "No")
for i in res:
    print(i)
