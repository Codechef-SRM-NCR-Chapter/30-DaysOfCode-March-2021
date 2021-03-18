def checkPrime(num):
    if num > 1:
        for i in range(2, num):
            if (num % i) == 0:
                return False
    return True

num = input("Enter a number: ")
rev = int(num[::-1])
num = int(num)

if checkPrime(num) and checkPrime(rev):
    print(f"{num} is and Emirp Number")
else:
    print(f"{num} is not an Emirp Number")