m = input("Enter number: ")
p = m.split()
p = [int(i) for i in p]
l = 0
u = len(p)
m = 0
ans = 0

while u - l > 1:
    if p[0] == 0:
        break
    m = int((l + u)/2)
    if p[m] == 0:
        u = m
    else:
        l = m

if p[m] == 0:
    ans = m
else:
    ans = m + 1

print(ans)
