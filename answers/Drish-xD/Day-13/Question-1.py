# Find the sum of digits of number using recursion :)


def digit_sum(number):
    if number == 0:
        return 0
    else:
        return number % 10 + digit_sum(number // 10)


num = int(input("Enter the number :"))
print("The sum of digits of", num, "is :", digit_sum(num))
