s=input("Enter array in form [n1,n2,n3,..] : ")
s=s[1:len(s)-1]
a=s.split(",")
ar=[]
for i in a:
    ar.append(int(i))
a=int(input("Enter A : "))
b=int(input("Enter B : "))
c=int(input("Enter C : "))
m=0
for i in range(0,len(ar)-2):
    for j in range(i+1,len(ar)-1):
        for k in range(j+1,len(ar)):
            if (abs(ar[i]-ar[j])<=a) & (abs(ar[j]-ar[k])<=b) & (abs(ar[i]-ar[k])<=c):
                m+=1
print("No. of good triplets : ",m)
