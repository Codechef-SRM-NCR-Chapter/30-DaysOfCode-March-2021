string = input()
count4 = count7 = 0
for ch in string:
    if ch == '4':
        count4 += 1
    elif ch == '7':
        count7 += 1
if count4 == 0 and count7 == 0:
    print(-1)
elif count4 >= count7:
    print(4)
else:
    print(7)
