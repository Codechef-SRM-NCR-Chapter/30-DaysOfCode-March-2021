s=input("Enter array in form [n1,n2,n3,..] : ")
s=s[1:len(s)-1]
a=s.split(",")
n=[]
for i in a:
    n.append(int(i))
n.sort()
su=0
for i in range(0,len(n),2):
    su=su+n[i]
print(su)
