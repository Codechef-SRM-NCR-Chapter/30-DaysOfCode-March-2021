num=int(input("Enter a Number : "))
def pr(num):
    if num>1:
        for i in range(2,num):
            if num%i==0:
                return False;
    else:
        return False
    return True
if pr(num):
    a=str(num)[::-1]
    a=int(a)
    if pr(a):
        print(num," and ",a," is a prime number which means ",num,"is an emirp number.")
    else:
        print(num," is a prime number but not an emirp number.")
else:
        print(num," is not a prime number.")
