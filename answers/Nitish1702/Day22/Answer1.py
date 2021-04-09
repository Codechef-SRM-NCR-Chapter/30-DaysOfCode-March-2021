s=input()
l=len(s)
a=[]
for i in range(l-1,-1,-1):
    if a==[]:
        a.append(s[i])
    else:
        p=a.pop()
        if s[i] != p:
            a.append(p)
            a.append(s[i])
if len(a)==0:
    print(-1)
else:
    for i in range(len(a)):
        print(a.pop(),end="")
