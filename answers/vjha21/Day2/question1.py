##To check if given number is emirp number

def checkPrime(n):
    #base case
    if n <= 1:
        return False

    for i in range(2, n):
        if n % i == 0:
            return False

    return True

def checkEmirp(n):
    n = int(n)
    if checkPrime(n) == False:
        return False
    
    reverse = 0
    while n != 0:
        d = n % 10
        reverse = reverse * 10 + d
        n = int(n/10)

    return checkPrime(reverse)

if __name__ == "__main__":
    n = int(input("Enter a number to check for EMIRP Number : "))
    if checkEmirp(n):
        print("Yes")
    else:
        print("No")
    