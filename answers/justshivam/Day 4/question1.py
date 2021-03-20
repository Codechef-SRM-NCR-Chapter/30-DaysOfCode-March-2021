num = int(input('Enter a number: '))

res = []
cur = 2

while num != 1:
    if (num%cur) != 0:
        cur += 1
        continue
    num /= cur
    res.append(cur)

print(', '.join(str(v) for v in res)) 