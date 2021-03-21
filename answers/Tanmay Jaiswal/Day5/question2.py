#program to print pattern(day5)

def isPrime(n):
    if n==1:
        return False

    flag = True
    if(n > 1):
        for i in range(2, n):
            if(n % i == 0):
                flag = False
                break
    return flag

x= 1

for i in range(1,n+1):
    for j in range(1,i+1):
        if(isPrime(x)):
            print("#",end=" ")
        else:
            print("*",end=" ")
        x+=1
    print("\n")
    
#value has been given to n according to the question  
n=4
