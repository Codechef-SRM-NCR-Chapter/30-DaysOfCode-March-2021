t,n=int(input()),list(map(int,input().strip('[]{} ').split(',')))
n.sort()
a,b='',''
for i in range(0,len(n)-1,2):
    a+=str(n[i])
    b+=str(n[i+1])
print(int(a)+int(b))
