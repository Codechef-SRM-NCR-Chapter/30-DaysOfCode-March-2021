open = ["[", "{", "("]
close = ["]", "}", ")"]
s = input()
lst = []
flag = True
for i in (s):
    if i in open:
        lst.append(i)
    elif i in close:
        if (len(lst) > 0):
            if (open[close.index(i)] == lst[-1]):
                lst.pop()
        else:
            flag = False
if (len(lst) != 0):
    flag = False
print(flag)
