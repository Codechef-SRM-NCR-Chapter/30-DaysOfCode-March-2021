# Program to print fibonacci series upto 50 terms :)

def fib(n):
    n1 = 0
    n2 = 1
    count = 0
    series = ()

    if n <= 0:                       # Number should be positive in order to get the series
        print(" Please enter a positive number ")
    elif n == 1:
        print(" Fibonacci series upto", n, "is :", n1)
    else:
        print(" Fibonacci series upto", n, "is :")
    while count < n:                 # logic of the program
        series = series + (n1,)
        nth = n1 + n2
        n1 = n2                     # changing the value of n1 to n2
        n2 = nth
        count += 1
    print(series)  # Print the series


# Calling function with value of n
fib(50)
