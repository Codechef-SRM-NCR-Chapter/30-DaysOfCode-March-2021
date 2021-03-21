num=int(input("enter any no"))
temp=num
t=num
f=0
while temp!=0:
    rem=temp%10
    t=num
    c=0
    while t!=0:
        r=t%10
        if rem==r:
            c=c+1
            if c>1:
                f=1
                break
        t=int(t/10)
    temp=int(temp/10)
if f==0:
    print(num,"Is a unique no")
else:
    print(num,"Is not unique no")
