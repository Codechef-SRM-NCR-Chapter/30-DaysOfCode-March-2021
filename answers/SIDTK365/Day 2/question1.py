def reverse_number(n):
    r = 0
    while n > 0:
        r *= 10
        r += n % 10
        n //= 10
    return r


def isPrime(n):
    flag = False
    if(n > 1):
        for i in range(2, n):
            if(n % i == 0):
                flag = True
                break
    return flag


n = int(input())
flag = False
if(isPrime(n)):
    print(n,"is not an Emirp number")
else:
    flag = True

if(flag == True):
    x = reverse_number(n)
    if(isPrime(x)):
        print(n,"is not an Emirp number")
    else:
        print(n,"is an Emirp number")
    
