# Program to remove adjacent duplicate character using recursion :)


def remove_duplicate(string):
    for i in range(len(string)-1):
        if string[i] == string[i + 1]:
            string = string.replace(string[i] * 2, string[i])   # Deleting the adjacent duplicate character
            return remove_duplicate(string)     # Using recursion
    return string


# Recalling the function
s = input("Enter the string :")
print(remove_duplicate(s))
