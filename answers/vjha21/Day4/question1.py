import math
##To print the prime factorisation of a given number

def prime_factorize(num) :
    number = num
    prime_factors = []

    while number % 2 == 0 :
        factor = 2
        prime_factors.append(factor)
        number = number / 2
    
    for odd_factor in range(3, int(math.sqrt(number) + 1), 2) :
        while number % odd_factor == 0 :
            prime_factors.append(odd_factor)
            number = number / odd_factor
    
    if number > 2:
        prime_factors.append(number)

    return prime_factors

if __name__ == "__main__" :
    number = int(input("Enter a number to prime factorize : "))
    print(prime_factorize(number))