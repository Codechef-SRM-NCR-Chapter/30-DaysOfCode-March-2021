s=input("")
l=list(s)
l1=[]
for i in l:
    if i not in l1:
        l1.append(i)
for i in l1:
    print(i,end="")
