arr = input().split()
c = [[]]
sum = 0
for i in range(len(arr)):
    n = i+1
    while (n<=len(arr)):
        d = arr[i:n]
        c.append(d)
        n += 1
for i in c:
    if(len(i)%2==1):
        for j in i:
            sum = sum+int(j)
print(sum)
