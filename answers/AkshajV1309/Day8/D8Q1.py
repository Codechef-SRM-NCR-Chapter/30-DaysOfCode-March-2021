o=[int(x) for x in input('Enter numbers seprated by space: ').split()]
o.sort()
r=[]
for i in range(0,len(o)-1):
    if o[i]==o[i+1]:
        r.append(o[i])
r=list(set(r))
o=set(o)
while(len(r)>0):
    o.remove(r[0])
    r.pop(0)    
print(sum(o))
