a = 0
b = 1
n = int(input())
for i in range(n):
    print(a,end=",")
    print(b,end=",")
    a = a+b
    b = b+a
print("\b")
