n= int(input("Enter the length of the array\n"))
a=[]
print("Enter the inputs\n")
for i in range(n):
    a.append(int(input()))
c=0
while a!=[0]*n:
    for i in range(n):
        if a[i]%2!=0:
            a[i]-=1
            c+=1
        a[i]=a[i]//2
    if a!=[0]*n:
        c+=1
print(c)
