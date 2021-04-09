n,x=int(input('N=')),int(input('X='))
n=list(map(int,input('arr[]=').strip('{} ').split(',')))
c=0
for i in range(len(n)):
    for j in range(i+1,len(n)):
        for k in range(j+1,len(n)):
            if k<len(n) and n[i]+n[j]+n[k] < x:
                c+=1
print(c)
