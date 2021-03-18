#Program to check if the number "n" is an Disarium Number

n=int(input("Enter the number : "))
j=1
sum=0
temp=n
while(temp!=0):
    rem=temp%10
    sum=sum*10+rem
    temp=int(temp/10)
temp=sum
sum=0
while(temp!=0):
    rem=temp%10
    sum=sum+pow(rem,j)
    temp=int(temp/10)
    j=j+1
if sum==n:
    print("%d is a Disarium Number"%n)
else:
    print("%d is not a Disarium Number"%n)
