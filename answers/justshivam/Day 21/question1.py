s = [i for i in input('Enter S: ')]
res = ''
for i in range(len(s)):
    res += s.pop()
print(res)
