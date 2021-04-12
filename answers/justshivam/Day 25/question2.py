res = []
for i in range(int(input())):
    cor, count = [int(x) for x in input().split()], 0
    if cor[0] < cor[1]:
        res.append('Invalid Test Case')
        continue
    for j in range(cor[1]):
        count += 1
        cor[0] -= 1
    res.append(count+cor[0])
for i in res:
    print(i)
