n=int(input())
n1=0;c=0;
while(n>0):
    s=n%10
    if s==n1:
        c+=1
    n1=s
    n=int(n/10)
if c>0:
    print("Not a unique no")
else:
    print("Unique No")
    
