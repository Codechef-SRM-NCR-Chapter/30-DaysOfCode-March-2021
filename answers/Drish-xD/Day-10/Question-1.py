# Program to Check the Pangram in a string :)

def pangram(string):
    letters = "abcdefghijklmnopqrstuvwxyz"      # String of all alphabets
    string_2 = string.lower()
    ans = ""        # Empty string to store the final answer
    for i in letters:
        if i not in string_2:
            ans = "Pangram doesn't exist :("
            break
        else:
            ans = "pangram exist :)"
    return ans


s = input("Enter a sentence to check it's pangram or not : ")

print(pangram(s))
