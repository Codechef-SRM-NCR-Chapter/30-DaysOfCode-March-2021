n=int(input("Enter a number"))
i=2
while(n!=1):
    if(n%i==0):
        print(i,end =" ")
        n//=i
    else:
        i+=1
