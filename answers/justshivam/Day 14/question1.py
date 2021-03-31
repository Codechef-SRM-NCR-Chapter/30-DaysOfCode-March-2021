string = input()
res = ''
for i in string:
    if res == '':
        res += i
    elif not res[-1] == i:
        res += i
print(res)
