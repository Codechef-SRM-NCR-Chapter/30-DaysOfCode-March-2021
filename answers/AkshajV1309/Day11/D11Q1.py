import re
s=input("Enter String: ")
z=list(set(s))
i=c=0
for i in range(len(z)):
    r=re.findall(z[i], s)
    if len(r)%2==0:
        c=c
    else:
        c+=1
print('YES')if(c==1 & len(s)%2!=0)or(c==0 & len(s)%2==0)else print('NO')
