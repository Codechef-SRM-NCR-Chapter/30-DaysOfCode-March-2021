num=int(input())
r=sum=0
length=len(str(num))
n=num
while(num>0):
    r=num%10
    sum+=int(r**length)
    num=num//10
    length-=1
if(sum==n):
    print(str(n)+" IS A DISARIUM")
else:
    print(str(n)+" IS NOT A DISARIUM")