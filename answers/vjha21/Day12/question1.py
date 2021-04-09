"""Process m operations of type
    1. Change the charecter at position k to x
    2. check if th substring from position b is a palindrome
"""


def switch_charecters(string, pos_k):
    string[pos_k - 1] = "X"
    return string


def check_palindrome(string):
    reverse_string = string[::-1]
    """ for i in range(len(string) - 1, 0, -1):
        reverse_string.append(string[i]) """

    if reverse_string == string:
        return True
    else:
        return False


if __name__ == "__main__":
    n_m = input(
        "Enter length of string and number of operations seperated by space : "
    ).split()
    length_of_string, number_of_operations = int(n_m[0]), int(n_m[1])
    string_input = input("Enter string :")
    for i in range(number_of_operations):
        line_input = input("Enter operation : ").split()
        operation, a, b = int(line_input[0]), int(line_input[1]), int(line_input[2])
        ##print(operation, a, b)
        if operation == 1:
            switch_charecters(string_input, a)
            print(string_input)
        elif operation == 2:
            sub_string = string_input[(a - 1) : (b - 1)]
            if check_palindrome(sub_string):
                print("YES")
            else:
                print("NO")
