s=input("Enter array in form [n1,n2,n3,..] : ")
s=s[1:len(s)-1]
a=s.split(",")
s=0
for i in range(1,len(a)+1,2):
    m=0
    n=i
    for j in range(1,len(a)-i+2):
        ar=a[m:n]
        for k in ar:
            s=s+int(k)
        m+=1
        n+=1
print(s)
