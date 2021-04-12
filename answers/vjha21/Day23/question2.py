""" To find the Nth good number using queue.
        -> A good number is which contains only 1s and 2s
"""


def find_good_num(number):
    arr = [""] * (number + 1)
    index = 1
    m = 1
    while index <= number:
        i = 0
        while i < m and (index + i) <= number:
            arr[index + i] = "1" + arr[index - m + i]
            i += 1
        i = 0
        while i < m and (index + m + i) <= number:
            arr[index + m + i] = "2" + arr[index - m + i]
            i += 1
        m = m << 1
        index += m

    return arr[number]


if __name__ == "__main__":
    num = int(input("Enter a number to print the Nth good number : "))
    print(find_good_num(num))