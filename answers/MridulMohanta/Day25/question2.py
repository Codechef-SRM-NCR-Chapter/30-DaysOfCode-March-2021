inp = int(input("Enter number of test cases: "))
n = []
k = []
for i in range(0 , inp):
    m = input("Enter X and Y: ")
    s , o = m.split()
    n.append(s)
    k.append(o)
    n = [int(i) for i in n]
    k = [int(i) for i in k]

for i in range(0 , inp):
    if k[i] > n[i]:
        print("Destination unreachable")
    else:
        print(n[i])
