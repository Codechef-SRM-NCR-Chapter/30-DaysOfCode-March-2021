# Program to reverse the words in a string using recursion :)

result = []


def rev_string(s, l, i=0):
    global result
    if i < l+1:
        result.append(s[l])
        return rev_string(s, l-1)
    return result


string = input("Enter the string :")
s = string.split()
l = len(s)-1
print(" ".join(rev_string(s, l)))
