res = []
for i in range(int(input())):
    case = [int(x) for x in input().split()]
    comp, prime, check = 0, 0, True
    for j in range(case[0], case[1]+1):
        if j % 2 == 0 and not j == 2:
            comp += 1
            continue
        for k in range(j-2, 1, -2):
            if j % k == 0:
                comp += 1
                check = False
                break
        if check:
            prime += 1
        check = True
    res.append(comp*prime)
for i in res:
    print(i)
