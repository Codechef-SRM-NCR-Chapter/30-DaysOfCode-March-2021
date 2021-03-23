num=int(input("Enter a number "))
n=num
nnum=0
while(n!=0):
    r=n%10
    nnum+=r**len(str(n))
    n//=10
if(nnum==num):
    print(num,'is a Disarium number')
else:
    print(num,'is not a Disarium number')
