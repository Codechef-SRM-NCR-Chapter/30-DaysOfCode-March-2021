n=int(input("Enter the no. : "))
s=""
for i in range(2,n+1):
    if(n%i==0):
        n=n/i
        print(i,",",end="")
    else:
        i+=1

