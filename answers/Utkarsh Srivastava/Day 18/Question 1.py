N = int(input())
c = 0
for i in range(1,N):
    for j in range(i+1):
        if(j*j==i):
            c += 1
print(c)
