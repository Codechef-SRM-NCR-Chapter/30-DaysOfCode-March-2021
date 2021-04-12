inp = int(input("Enter length of array: "))
n = []
count = 0
for i in range(0 , inp):
    m = int(input("Enter elements: "))
    n.append(m)

for i in range(1 , len(n)):
    while (n[i - 1] > n[i]):
        n[i] = n[i] + 1
        count = count + 1

print(count)
