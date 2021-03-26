string = input('Enter a string: ').lower()
arr = [x for x in string.split()]
res = []
for x in arr:
    for i in x:
        if i not in res:
            res.append(i)
print('Pangram exists' if len(res) == 26 else 'Pangram doesn\'t exist')
