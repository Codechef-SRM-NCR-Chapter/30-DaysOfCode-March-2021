o=[int(x) for x in input('Enter NUMS seprated by space: ').split()]
i,n,s=0,1,[0]
while(i<=len(o)and n<len(o)+1):
    s.append(sum(o[i:i+n]))
    i+=1
    if(i+n==len(o)+1):
        n+=1
        i=0
print("Largest Sum:",max(s))
