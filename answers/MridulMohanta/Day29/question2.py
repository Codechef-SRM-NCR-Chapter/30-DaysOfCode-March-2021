def chk_sum_num(x, possiblesums, n):
    if x > n:
        return
    if possiblesums[x]:
        return
    possiblesums[x] = True
    chk_sum_num(x + num1, possiblesums, n)
    chk_sum_num(x + num2, possiblesums, n)


num1, num2, res = 2020, 2021, []
for i in range(int(input('enter range of no.: '))):
    n = int(input('enter no. which you want to chk  sums: '))
    possiblesums = [False] * (n + 1)
    chk_sum_num(0, possiblesums, n)
    res.append("Yes" if possiblesums[n] else "No")
for i in res:
    print(i)
