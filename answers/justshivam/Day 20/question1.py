num, res = int(input('Enter N: ')), []
for i in range(num):
    temp = ''
    for j in input():
        if not j in temp:
            temp += j
    res.append(temp)
for x in res:
    print(x)
