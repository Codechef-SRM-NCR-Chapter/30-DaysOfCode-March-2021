n=list(map(lambda x:int(x),input('NUMS=').strip('[]').split(',')))
raw=[]
s=[]
for i in range(len(n)):
    for j in range(i,len(n)):
        raw.append(sum(n[i:j+1]))
print(max(raw))
