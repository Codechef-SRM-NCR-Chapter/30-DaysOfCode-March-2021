x=[]
n=int(input("enter the number of elements"))
for y in range(n):
    d=int(input("enter the elements"))
    x.append(d)
a=int(input("enter the number "))
b=int(input("enter the number "))
c=int(input("enter the number "))

if a<=n and b<=n and c<=n:
    if a>=0 and b>=0 and c>=0:
            for  i in range(n):
                for j in range(n):
                    for k in range(n):
                        if abs((x[i]-x[j]))<= a and abs((x[i]-x[k]))<= c and abs((x[k]-x[j]))<= b:
                            print(x[i],",",x[j],",",x[k])




