r=[int(x) for x in input('Enter numbers seprated by space: ').split()]
c=[]
s=0
for i in range(len(r)):
    for j in range(i+1,len(r)):
        c.append((r[i],r[j]))
for i in range(int(len(c))):
    a = min(c[i])+min(c[len(c)-i-1])
    if(a>s):
        s=a
print(s)
