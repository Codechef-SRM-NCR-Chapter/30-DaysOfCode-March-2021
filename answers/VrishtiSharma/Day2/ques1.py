def isprime(num):
    if num<=1:
        return False
    if num>1:
        for i in range(2,num):
            if num%i == 0:
                return False
    return True

n = input("Enter a number: ")
rev_num = int(n[::-1])
n = int(n)
if isprime(n) and isprime(rev_num):
    print(f"{n} is an Emirp number.")
else:
    print(f"{n} is not an Emirp number.")
