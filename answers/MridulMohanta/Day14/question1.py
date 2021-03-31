def adjdup(string):
    if not string:
        return " "
    if len(string) == 1:
        return string
    if string[0] == string[1]:
        return adjdup(string[1:])
    return string[0] + adjdup(string[1:])

x = input("Enter: ")
print(adjdup(x))
