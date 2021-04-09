n = input("Enter binary no.")
l = []

l.append(n[0])

for i in range(1 , len(n)):
    if len(l) == 0:
        l.append(n[i])
    else:
        if l[-1] == n[i]:
            l.pop()
        else:
            l.append(n[i])

if len(l) == 0:
    print(-1)
else:
    print("".join(l))
