c=0
raw=[]
for _ in range(int(input())):
    for i in (input()):
        c+=1
    raw.append((c*(c-1))//2)
    c=0
raw=reversed(raw)
for j in raw:
    print(j)
