# Program to print the prime factorization of a number :)

import math

n = int(input("Enter the number : "))  # Enter number for factorization

factor = []  # creating empty list to store factors

while n % 2 == 0:
    factor.append(2)  # Adding number of 2's in the factors
    n = n / 2

    for i in range(3, int(math.sqrt(n)) + 1, 2):
        while n % i == 0:
            factor.append(i)  # for Adding other factors in the list
            n = n / i

if n > 2:
    factor.append(int(n))

# printing the final list of factors in ascending order
print(sorted(factor))
