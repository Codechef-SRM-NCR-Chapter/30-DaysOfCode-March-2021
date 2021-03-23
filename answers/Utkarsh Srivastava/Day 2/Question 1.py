n = int(input())
e = 0
s = 0
for i in range(2,n):
    if(n%i == 0):
        e = 1
if(e==0):
    while (n != 0):
        n = int(n/10)
        s = s*10+b
for i in range(2,s):
    if(s%i == 0):
        e = 1
if(e!=1):
    print("It is a Emirp number")
else:
    print("It is not a Emirp number")
