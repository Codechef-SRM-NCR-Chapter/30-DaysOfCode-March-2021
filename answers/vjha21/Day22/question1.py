""" To perform several operations on a string.
        1. Choose a non-empty even length substring containing only 0s or 1s
        2. Remove it from the string
"""


def string_manipulator(string):
    in_string = [binary_el for binary_el in string]
    index = 0
    for index in range(1, len(in_string), 1):
        if in_string[index] == in_string[index - 1]:
            print("BEFOR OPERATION : ", in_string)
            del in_string[index - 1 : index + 1]
            print("AFTER OPERATION :", in_string)
            return string_manipulator("".join(in_string))
    return in_string


if __name__ == "__main__":
    string = "101001"
    print("FINAL :", string_manipulator(string))
