""" From a string of digits, find the string that : 
        1. represents a lucky number without leading zeroes
            (Decimal representation only contains 4 and 7)
        2. is not empty
        3. is contained in s as a substring the maximum number of times 
        
        *(Need lexicographically minimum one string)
"""


def find_sub_string(string):
    string = str(string)
    sub_strings = [
        string[i:j] for i in range(len(string)) for j in range(i + 1, len(string) + 1)
    ]

    condition = True
    max_count = 0
    out_substring = []
    for number in sub_strings:
        condition = True
        # Condition 1 :
        for digit in number:
            if digit == "4" or digit == "7":
                continue
            else:
                condition = False
        # Condition 2 :
        if not number:
            condition = False
        # Condition 3 :
        count = sub_strings.count(number)
        if count < max_count:
            condition = False
        else:
            max_count = count

        if condition == True:
            out_substring.append(number)
    out_substring.sort()

    return out_substring[0]


if __name__ == "__main__":
    """ string = 47 """
    string = input("Enter a string to check for conditions : ")
    print(
        f"The string that satisfies all the conditions above mentioned is : {find_sub_string(string)}"
    )
