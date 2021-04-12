from numpy import unique
n=list(input())
l=set()
def fact(k):
    while k>0:
        if k==1:
            return 1
        else:
            
            return k* fact(k-1)

print(fact(len(n)))
for h in range(len(n)):
    for i in range(len(n)):
        for b in range(len(n)):
            for j in range(len(n)):
                n[b],n[j]=n[j],n[b]
                l.add(str(n).strip('[]').replace("'",'').replace(',',''))
            
        n[h],n[i]=n[i],n[h]
c=0
for k in l:
    c+=1
    print(k,c)
    
