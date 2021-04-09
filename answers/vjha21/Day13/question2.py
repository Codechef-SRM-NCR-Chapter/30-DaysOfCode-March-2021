""" to check if an array is a palindrom, without using recursion. """


def check_palindrome(array):
    reversed_array = array[::-1]
    if array == reversed_array:
        return True
    else:
        return False


if __name__ == "__main__":
    """ input_array = [1, 2, 3, 4, 5, 7] """
    input_array = [3, 6, 0, 6, 3]
    if check_palindrome(input_array):
        print("PALINDROME : YES")
    else:
        print("PALINDROME : NO")