x=[]
n=int(input("enter the length of array"))
for i in range(n):
    d= int(input("enter the element"))
    x.append(d)
s=0

x.sort()
print(x)
for i in range(0,n,2):
    s+=x[i]
print(s)
