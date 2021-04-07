""" To find the minimum possible sum of two numbers formed from digits of array.
    All digits must be used to form the two numbers.
"""


def number_generator(num):
    for i in range(len(num) - 1, 0, -1):
        carry = 0
        if num[i] >= 10:
            carry += 1
            num[i] = num[i] % 10
            num[i - 1] += carry
    string_out = ""
    for nums in num:
        string_out += str(nums)
    return string_out


def minimum_sum(array):
    array.sort()
    number_one = []
    number_two = []

    for i in range(0, len(array)):
        if i % 2 == 0:
            number_two.append(array[i])
        else:
            number_one.append(array[i])
    number_sum = []
    for i in range(0, len(number_one)):
        number_sum.append(number_one[i] + number_two[i])
    return number_generator(number_sum)


if __name__ == "__main__":
    arr = [6, 8, 4, 5, 2, 3]
    print(minimum_sum(arr))