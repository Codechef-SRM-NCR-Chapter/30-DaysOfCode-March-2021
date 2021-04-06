m = int(input("Enter N: "))
x = int(input("Enter X: "))
n = []
count = 0

for i in range(0 , m):
    num = int(input("Enter numbers: "))
    n.append(num)

for i in range(0 , m):
    for j in range(i + 1 , m):
        for k in range(j + 1 , m):
            if (n[k] + n[j] + n[i]) < x:
                count = count + 1

print(count)
