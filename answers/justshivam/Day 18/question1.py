num = int(input('Enter N: '))

cur, sq = 1, 1

while sq < num:
    cur += 1
    sq = cur**2

print(cur - 1)
    