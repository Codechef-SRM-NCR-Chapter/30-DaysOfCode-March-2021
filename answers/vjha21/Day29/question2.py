""" To check whether it can be represented as a sum of 2020 and 2021 """


def check_if_sum(number):
    if number == 2020 + 2020 or number == 2020 + 2021 or number == 2021 + 2021:
        return True
    return False


if __name__ == "__main__":
    num = input(
        "Enter a number to check if it can be represented as a sum of 2020 and 2021 : "
    )
    if check_if_sum(int(num)):
        print("YES")
    else:
        print("NO")