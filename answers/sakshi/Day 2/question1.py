#Day 2
n=int(input())
k=n
num1=0
while(n>0):
    num1=(num1*10)+(n%10)
    n=int(n/10)
if(k%2!=0 and num1%2!=0):
    print("Emirp No")
else:
    print("Not an Emirp No")
