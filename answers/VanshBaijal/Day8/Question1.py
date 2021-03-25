n=[int(x) for x in input("Enter the numbers with space: ").split()]
n.sort()
r=[ ]
for i in range(0,len(n)-1):
    if n[i]==n[i+1]:
        r.append(n[i])
r=list(set(r))
n=set(n)
while(len(r)>0):
    n.remove(r[0])
    r.pop(0)    
print("SUM of unique elements: ",sum(n))
