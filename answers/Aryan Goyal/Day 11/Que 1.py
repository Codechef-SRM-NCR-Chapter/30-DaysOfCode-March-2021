s=input("")
l=l1=[]
for i in s:
    if i not in l:
        l.append(i)
for k in l:
    s1=0
    for j in s:
        if k==j:
            s1+=1
    if s1%2!=0:
        print("No")
        break
else:
    print("Yes")
