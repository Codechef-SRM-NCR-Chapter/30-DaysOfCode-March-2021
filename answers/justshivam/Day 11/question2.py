string = input('Enter a string: ')
res = []
for i in range(int(input('Enter a number: '))):
    sub = input(f'{i+1}) Enter substring: ')
    res.append(string.count(sub))
[print(x) for x in res]
