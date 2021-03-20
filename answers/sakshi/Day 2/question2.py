#day 2
n=int(input())
k=n
sum=0
l=len(str(n))
while(n>0):
    s=n%10
    sum=sum+pow(s,l)
    l-=1
    n=int(n/10)

if(k==sum):
    print("Disparium No")
else:
    print("Not a Disparim No")
    
