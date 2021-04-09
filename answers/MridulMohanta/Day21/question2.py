n = int(input("Enter N: "))
l = []
for i in range(0 , n):
    inp = int(input("Enter numbers: "))
    l.append(inp)
l.sort()
a = 0
b = 0
for i in range(0 , n):
    if i % 2 != 0:
        a = a * 10 + l[i]
    else:
        b = b * 10 + l[i]
c = a + b
print(c)
