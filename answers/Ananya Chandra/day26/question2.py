l= int(input("Enter the size of array \n"))
a=input("Enter the integer inputs\n").split()
c=0
a[0]=int(a[0])
for i in range(1,l):
    a[i]=int(a[i])
    while a[i]<a[i-1]:
        c+=1
        a[i]+=1
print(c)

