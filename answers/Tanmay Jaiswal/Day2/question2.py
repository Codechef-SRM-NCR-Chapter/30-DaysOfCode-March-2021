 #write a program to check whether the given number is emirp or not? 
    
n = int(input("Enter number:"))
def prime(n):
    if(n>1):
        for i in range(2,n):
            if n%i == 0:
                return False;
    else:
        return False
    return True
if prime(n):
    x = str(n)[::-1]
    x = int(x)
    if prime(x):
        print(n,"is an Emirp number.")
    else:
        print(n,"is not an Emirp number.")
else:
        print(n,"is not a Emirp number.")
