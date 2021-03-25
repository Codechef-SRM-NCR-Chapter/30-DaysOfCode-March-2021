arr = input("Enter number")
num = arr.split()
num = [int(i) for i in num]

x = int(input("Enter target number"))
z = []

for i in range(0 , len(num)):
    for j in range(0 , len(num)):
        if num[i] + num[j] == x:
            z.append(i)
            z.append(j)
    break

print(z)
