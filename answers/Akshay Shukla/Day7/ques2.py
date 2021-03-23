s=input("Enter num in form [n1,n2,n3,..] : ")
s=s[1:len(s)-1]
a=s.split(",")
n=[]
for i in a:
    n.append(int(i))
s1=input("Enter index in form [n1,n2,n3,..] : ")
s1=s1[1:len(s1)-1]
a1=s1.split(",")
ind=[]
for j in a1:
    ind.append(int(j))
tl=[]
for i in range(0,len(n)):
    tl.insert(ind[i],n[i])
print(tl)
