##To check if string is anagram and palindrome simultaneously


def check_anagram(string_one, string_two):
    string_one_set = []
    string_two_set = []

    for char in string_one:
        if char not in string_one_set:
            string_one_set.append(char)
    for char in string_two:
        if char not in string_two_set:
            string_two_set.append(char)
    for element in string_one_set:
        if element not in string_two_set:
            return False
    return True


def check_palindrome(string):
    reverse_string = string[::-1]
    """ for i in range(len(string) - 1, 0, -1):
        reverse_string.append(string[i]) """

    if reverse_string == string:
        return True
    else:
        return False


if __name__ == "__main__":
    str_one = "abba"
    str_two = "abab"

    if check_anagram(str_one, str_two):
        print("YES : ANAGRAM")
        if check_palindrome(str_one):
            print("YES : PALINDROME")
        else:
            print("NO : PALINDROME")
    else:
        print("NO : ANAGRAM")