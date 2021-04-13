""" To find number of ways of selecting a pair of prime number and composite
    number in given range.
"""


def make_pairs(x, y):
    prime_numbers = []
    comp_number = []
    for i in range(x, y + 1):
        if check_prime(i):
            prime_numbers.append(i)
        else:
            comp_number.append(i)
    no_of_pairs = len(prime_numbers) * (len(comp_number))
    return (
        no_of_pairs,
        "Prime numbers : ",
        prime_numbers,
        "Composite numbers : ",
        comp_number,
    )


def check_prime(num):
    flag = False
    for i in range(2, num):
        if (num % i) == 0:
            flag = True
            break
    return flag


if __name__ == "__main__":
    # x, y = 5, 11
    test_cases = int(input("Enter number of test cases : "))
    while test_cases != 0:
        x_y = input("Enter the range of number :")
        x, y = x_y.split()
        print("No of pairs are : ", *make_pairs(int(x), int(y)))
        test_cases -= 1
