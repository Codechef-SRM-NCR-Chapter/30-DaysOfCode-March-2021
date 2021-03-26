# Program to print each concatenated words :)

def camelcase(string):
    lst = [string[0]]       # Create list
    for i in string[1:]:
        if i in ('ABCDEFGHIJKLMNOPQRSTUVWXYZ'):     # Checking capital letters
            lst.append(' ')         # Adding empty space b/w words
            lst.append(i)
        else:
            lst.append(i)

    ans = ''.join(lst)      # Required ans in form of string
    x = ans.split()
    for i in x:
        print(i)            # Print each word in new line
    print(len(x))           # Counting and printing the number of words


s = input("Enter Camelcase :")
camelcase(s)
