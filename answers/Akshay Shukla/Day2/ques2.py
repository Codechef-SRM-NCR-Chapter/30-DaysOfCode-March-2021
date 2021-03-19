def Prime(n):
    for i in range(2,n):
        if(n%i==0):
            return 0
    return 1

def rev(n):
    s=0
    while(n!=0):
        s=s*10+(n%10)
        n//=10
    return s

num=int(input("Enter no. to be checked : "))
num2=rev(num)
if(Prime(num)==1 & Prime(num2)==1):
    print(num," is a emirp number")
else:
    print(num," is not a emirp number")
