program for  Emirp number

n=int(input("Enter the number\n"))
def prime(t,i):
    if(i<t):
        if(t%i!=0):
            return prime(t,i=i+1)
        else:
            return 0
    else:
        return 1

p=prime(n,2)
if p==1:
    s=0
    c=n
    while(c>0):
        r=c%10
        s=s*10+r
        c=c//10
    p=prime(s,2)
    if p==1:
        print(n," is an Emirp number")
    else:
        print(n, " is not an Emirp number")
else:
    print(n, " is not an Emirp number")
