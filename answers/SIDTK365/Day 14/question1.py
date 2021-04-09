def helper(string):
    if not string:
        return ""
    if len(string) == 1:
        return string
    if string[0] == string[1]:
        return helper(string[1:])
    return string[0] + helper(string[1:])

string = input()
print(helper(string))
