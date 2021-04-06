s, check, res = input('Enter Expression: '), [], True
left, right = ['(', '{', '['], [')', '}', ']']
for i in s:
    if i in right:
        z = left[right.index(i)]
        if not z == check[-1]:
            res = False
            break
        check.remove(z)
    elif i in left:
        check.append(i)
print(res)
