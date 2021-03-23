n=int(input())
num=n
a={}
x=0
count=0
while n!=0:
    r=n%10
    n=int(n/10)
    a[x]=r
    for i in range(x):
        if(r==a[i]):
            count+=1
            break
    x+=1
if count==0:
    print(str(num)+" is an Unique No.")
else:
    print(str(num)+" is not an Unique No.")