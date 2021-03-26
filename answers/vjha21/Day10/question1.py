import string

##To determine if the given string is a pangram


def check_pangram(string):
    alphabet_set = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet_set:
        if char not in string:
            return False
    return True


if __name__ == "__main__":
    string_input = str(input("Enter a string to check for pangram: "))
    if check_pangram(string_input):
        print("PANGRAM EXISTS.")
    else:
        print("PANGRAM DOESN'T EXIST.")