x=[]
n=int(input("Enter the number of elements : "))
for y in range(n):
    d=int(input("Enter the elements : "))
    x.append(d)
a=int(input("A : "))
b=int(input("B : "))
c=int(input("C : "))
if a<=n and b<=n and c<=n:
    if a>=0 and b>=0 and c>=0:
        for i in range(n):
            for j in range(n):
                for k in range(n):
                    if abs((x[i]-x[j]))<=a and abs((x[i]-x[k]))<=c and abs((x[k]-x[j]))<=b:
                        print(x[i],",",x[j]),",",x[k]
