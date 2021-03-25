s=input("Enter array in form [n1,n2,n3,..] : ")
s=s[1:len(s)-1]
a=s.split(",")
n=[]
for i in a:
    n.append(int(i))
su=0
for i in range(0,len(n)):
    m=0
    for j in range(0,len(n)):
        if n[i]==n[j]:
            m+=1
    if m<2:
        su=su+n[i]
print(su)
