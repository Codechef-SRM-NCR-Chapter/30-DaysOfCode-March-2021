#Enter no. of rows=4 for the required output this is the general code for any no. of rows.
def isPrime(n):
    for i in range(2,int((n/2)+1)):
        if n%i==0:
            return 0
    return 1

n=2
rows=int(input("Enter no. of rows(enter 4 for req. output): "))
print("*")
for i in range(2,rows+1):
    for j in range(1,i+1):
        x=isPrime(n)
        if x==1:
            print("#",end=" ")
        else:
            print("*",end=" ")
        n=n+1
    print("")
