n,m= input().split()
n=int(n)
m=int(m)
a=[]
c=[]
for i in range(m):
    a.append(input().split())
    if len(a[i][0])<=len(a[i][1]):
        c.append(0)
    else:
        c.append(1)
st=input().split()
for i in st:
    for j in range(m):
        if i in a[j]:
            print(a[j][c[j]], end=" ")


