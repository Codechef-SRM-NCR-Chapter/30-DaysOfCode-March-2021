x= int(input("Enter the Value to Check weather Its an Disarium Number or not: "))
num=x
temp=0
while x!=0:
    k=num%10
    temp+=k**len(str(num))
    num//=10
    
if(temp==x):
    print(x, 'is a Disarium Number')
    
else:
    print(x,'is not Disarium Number')