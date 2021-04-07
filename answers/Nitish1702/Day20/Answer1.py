n,res=int(input()),[]
while(n>0):
    l=list(input())
    S=[]
    for i in range(len(l)):
        if i>0 and int(l[i])==int(l[i-1]):
            i+=1
        else:
            S.append(l[i])
            i+=1
    res.append("".join(S))
    n-=1
for i in res:
    print(i)
