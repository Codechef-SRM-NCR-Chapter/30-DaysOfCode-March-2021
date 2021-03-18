n = int(input())
a = len(str(n))
c = n
s = 0
while (n != 0):
    b = n%10
    n = int(n/10)
    s = s + b**a
    a-=1
if(s==c):
    print("It is a Disarium number")
else:
    print("It is not a Disarium number")
