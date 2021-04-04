n=list(map(int,input().strip('{} ').split(',')))
c=[]
raw1={}
for i in n:
    b='{0:b}'.format(i)
    c.append(b)
print(c)
for j in c:
    count=j.count('1')
    if count in raw1:
        raw1[count].append(int(j,2))
    else:
        raw1[count]=[int(j,2)]
sraw1=sorted(raw1.items())
print(sraw1)
for k in range(len(sraw1)-1,-1,-1) :
    print(str(sraw1[k][1]).strip('[]').replace(',',' '),end=' ')

