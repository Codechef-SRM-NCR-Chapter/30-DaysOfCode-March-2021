a = []
n = int(input("Enter N: "))
k = int(input("Enter K: "))

for i in range(0 , n):
    m = int(input("Enter number: "))
    a.append(m) 
d = {}

for i in range(0 , len(a) - 1):
    for j in range(i + 1 , len(a)):
        d[a[i] + a[j]] = [i ,j]
for i in range(0 , len(a) - 1):
    for j in range(i + 1 , len(a)):
        s = a[i] + a[j]
        if k - s in d:
            p = d[k - s]
            if p[0] != i and p[0] != j and p[1] != i and p[1] != j:
                print(a[i] ," ", a[j] ," ", a[p[0]] ," ", a[p[1]] )
