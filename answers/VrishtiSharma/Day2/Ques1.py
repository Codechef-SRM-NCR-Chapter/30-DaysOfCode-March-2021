import math
n = input("Enter the number : ")
l = list(n)
a = 0
for i in range(len(l)):
    a += math.pow(int(l[i]), i+1)
if int(a)==int(n):
    print(n, "is a Disarium number.")
else:
    print(n, "is not a Disarium number.")
