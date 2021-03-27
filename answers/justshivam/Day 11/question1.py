string = input('Enter string: ')
dic = {}
for i in string:
    if i in dic.keys():
        dic[i] += 1
    else:
        dic[i] = 1
res = True
for i in dic.keys():
    if not dic[i] % 2 == 0:
        res = False
        break
print(res)
