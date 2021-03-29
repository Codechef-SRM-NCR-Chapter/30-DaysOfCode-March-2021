N,O=int(input("Test Case: ")),[]
for N in range(N,0,-1):
    n,c,i=int(input("Enter no. of chars: ")),0,0
    L=list(input("Enter String: "))
    if len(L)!=n:
        break
    n=1
    while(i<=len(L)and n<len(L)+1):
        l=L[i:i+n]
        if int(l[0])==1 and int(l[-1])==1:
            c+=1
        i+=1
        if(i+n==len(L)+1):
            n+=1
            i=0
    O.append(c)
for c in O:
 print(c)
