print("Hey, This is Rohit Kumar\nRegistration Number : RA2011026030049\nCSE-A(AIML)")
n=int(input("Please enter the number : "))
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
    print(n," is a Disarium Number.")
else:
    print(n," is not a Disarium Number.")
