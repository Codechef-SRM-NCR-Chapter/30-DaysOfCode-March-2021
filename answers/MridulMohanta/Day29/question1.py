a=[]
b=[]
x=int(input("Enter length of the two variables"))
n=int(input("Enter test number"))
y=0
for i in range(0,x):
    p=int(input("Enter element in a:"))
    a.append(p)
    q=int(input("Enter element in b:"))
    b.append(q)
for i in range(x-1,-1,-1):
    for j in range(i,-1,-1):
        if ((a[i]+b[j])<=n):
            print (a[i])
            print (b[j])
            temp=b[j]
            b[j]=b[i]
            b[i]=temp
            y=y+1 
            break
print (b)
if ((x-1)<=y):
    print ("YES")
else:
    print("NO")
