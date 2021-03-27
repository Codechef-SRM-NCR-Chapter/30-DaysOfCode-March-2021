# Program to Check the string is anagram, which is in turn a palindrome :)


def palindrome(string):
    lst = []        # Empty list to store all odd occurring alphabets in the string
    length1 = len(string)

    for i in range(len(string)):
        if string[i] in lst:
            lst.remove(string[i])     # This will remove all the even number of alphabets from the string
        else:
            lst.append(string[i])     # This will add all the odd number of alphabets from the string to empty list

    # If all the alphabets in the string is of even count or
    # if their is only one alphabet with odd count
    # then the string is Palindrome else its not palindrome
    if length1 % 2 == 0 and len(lst) == 0 or length1 % 2 == 1 and len(lst) == 1:
        return "YES :)"
    else:
        return "NO :("


st = input("Enter the string :")
print(palindrome(st))
