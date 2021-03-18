# Program to check the Number is Emirp Number or Not :)


n = int(input("Enter a Number : "))  # input the number u want to check


def prime(num):  # Function to check the prime number
    if num > 1:
        for i in range(2, num):
            if num % i == 0:
                return False
        else:
            return True
    else:
        return False


def emirp(num):     # Function to check the number is emirp or not
    if not prime(num):
        return False
    rev = 0
    while num != 0:
        a = num % 10
        rev = rev * 10 + a      # Reversing the number
        num = int(num / 10)
    return prime(rev)


if emirp(n):
    print(n, "is a emirp number.")
else:
    print(n, "is not a emirp number.")
