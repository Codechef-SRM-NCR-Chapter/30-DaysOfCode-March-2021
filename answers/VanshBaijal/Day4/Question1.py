n=int(input("Enter the number:"))
i=2
while(n!=1):
    rem=n%i
    if(rem==0):
        n=n/i
        print(i, end=" , ")
    else:
        i=i+1
