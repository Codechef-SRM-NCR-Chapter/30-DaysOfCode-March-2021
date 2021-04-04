a = []
n = int(input("Enter N: "))

for i in range(0 , n):
    m = int(input("Enter number: "))
    a.append(m) 

d = {}
out = []
sum1 = 0

for i in range(0 , len(a)):
    sum1 += a[i]
    if sum1 == 0:
        out.append((0 , i))
    alt = []
    if sum1 in d:
        alt = d.get(sum1)
        for j in range(0 , len(alt)):
            out.append((alt[j] + 1 , i))
    alt.append(i)
    d[sum1] = alt
if len(out) == 0:
    print("No subarray exists")
else:
    print(len(out))
    
