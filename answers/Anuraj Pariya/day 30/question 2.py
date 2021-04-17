import math
inp = int(input("Enter number: "))

count4 = 0
count7 = 0

while(inp > 0):
    l = inp % 10
    inp = (inp - l) / 10
    if l == 4:
        count4 = count4 + 1
    if l == 7:
        count7 = count7 + 1

if count4 == 0 and count7 == 0:
    print(-1)
elif count4 >= count7:
    print(4)
else:
    print(7)
