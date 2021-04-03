N,o=int(input('Enter Size: ')),[]
for i in range(N):
    o.append(int(input('Enter Element: ')))
i,n,s=0,1,[]
while(i<=N and n<N+1):
    if sum(o[i:i+n])==0:
        s.append(o[i:i+n])
    i+=1
    if(i+n==N+1):
        n+=1
        i=0
print("Output:",len(s))
