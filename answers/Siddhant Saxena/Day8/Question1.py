x=[]
s=0
n=int(input("enter the number of elements"))
for y in range(n):
    d=int(input("enter the elements"))
    x.append(d)



c=0
for j in x:
    c=0
    for b in x:

        if j==b:
            c+=1
    if c==1:
             s=s+j


print("sum",s)
