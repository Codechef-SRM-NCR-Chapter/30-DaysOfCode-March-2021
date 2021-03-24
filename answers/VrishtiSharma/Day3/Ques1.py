n = int(input("Enter a number: "))
a = 0
b = 0
for i in range(1, n+1):
    a = 10 * a + i
    b = a + b
    i+=1
print(b)
