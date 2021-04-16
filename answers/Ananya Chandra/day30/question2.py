st=input()
n=0
m=0
for i in st :
    if i=="4":
        m+=1
    elif i=="7":
        n+=1
if m==n==0:
    print(-1)
elif m>=n:
    print(4)
else:
    print(7)

