u=[]
v=[]
a=int(input("Length of the two variables: "))
n=int(input("Test number: "))
b=0
for i in range(0,a):
    p=int(input("Element of u:"))
    u.append(p)
    q=int(input("Element of v:"))
    v.append(q)
for i in range(a-1,-1,-1):
    for j in range(i,-1,-1):
        if ((u[i]+v[j])<=n):
            print (u[i])
            print (v[j])
            temp=v[j]
            v[j]=v[i]
            v[i]=temp
            b=b+1 
            break
print (v)
if ((a-1)<=b):
    print ("YES")
else:
    print("NO")
