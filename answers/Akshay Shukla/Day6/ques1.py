s=input("Enter candies array in form [n1,n2,n3,..] : ")
s=s[1:len(s)-1]
a=s.split(",")
m=0
for x in a:
    if m<int(x):
        m=int(x)
n=int(input("Enter no. of extra candies : "))
r=[]
for x in a:
    if n+int(x)>=m:
        r.append("True")
    else:
        r.append("False")
print(r)
