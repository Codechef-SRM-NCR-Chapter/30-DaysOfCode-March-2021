n= input('NUMS= ').split(',')
n=list(map(lambda x: int(x),n))

indx=input('INDEX= ').split(',')
indx=list(map(lambda x: int(x),indx))
a=0
raw=[]
print(type(indx[1]))
for i in indx:
    raw.insert(i,n[a])
    a+=1
print(raw)

