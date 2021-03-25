n=list(map(lambda x: int(x),input().split(",")))
raw=[]
raw1=[]
raw2=[]
for i in n:
    for j in n:
        if i<j:
            s=set((i,j))
            raw.append(s)

def func():
    for z in range(len(raw)):
        for k in range (len(raw)-1):
            if raw[z] not in raw2 and raw[k+1] not in raw2:
                if raw[z] & raw[k+1]:
                    continue
                else:
                    raw2.append(raw[z])
                    raw2.append(raw[k+1])
                    raw1.append(min(raw[z])+min(raw[k+1]))
    return raw1
        
print(max(func()))
    

