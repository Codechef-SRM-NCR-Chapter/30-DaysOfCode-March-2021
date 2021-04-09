# Program to change the character at position k to x and
# Check if the substring from position a to position b is a palindrome :)

def change(indx, character):
    string = strr[:indx] + character + strr[indx + 1:]
    return string


def palindrome(A, B):
    s = strr[A-1:B]
    if s == s[::-1]:
        return "Yes"
    else:
        return "No"


sol = []
x, y = map(int, input("Enter the length of string and number of operations you want to perform:").split())
strr = input(" Enter the string :")
for i in range(0, y):
    a, b, c = map(str, input("Enter the values *with spaces b/w them*:").split())
    if a == '1':
        strr = change(int(b)-1, c)
    elif a == '2':
        sol.append(palindrome(int(b), int(c)))
    else:
        print("Wrong input")
for i in sol:
    print(i)