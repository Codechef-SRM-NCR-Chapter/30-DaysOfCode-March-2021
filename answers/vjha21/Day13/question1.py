""" Find the sum of digits of a number using recursion """


def sum_of_digits(number):
    if number == 0:
        return 0
    last_digit = number % 10
    return last_digit + sum_of_digits(int(number / 10))


if __name__ == "__main__":
    number = int(input("Enter a number to check for sum of its digits : "))
    output = sum_of_digits(number)
    print(f"Sum of digits of {number} is {output}.")
