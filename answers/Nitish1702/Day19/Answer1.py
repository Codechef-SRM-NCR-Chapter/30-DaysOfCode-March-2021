n=int(input('N='))
arr=list(map(int,input('arr[]=').strip('[]{} ').split(',')))
l=[]
for i in range(1,n+1):
    if i in arr :
        if arr.count(i)==2:
            l.insert(0,i)
    else:
        l.insert(1,i)
    if len(l)==2:
        break
print(str(l).strip('[]').replace(',',' '))
