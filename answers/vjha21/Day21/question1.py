""" Reverse a string using a stack """


def reverse_string(string):
    stack = []
    index = 0

    while index < len(string):
        stack.append(string[index])
        index += 1

    string_out = ""
    for _ in range(0, len(string)):
        string_out += stack.pop()

    return string_out


if __name__ == "__main__":
    string = "HelloWorld"
    print(reverse_string(string))
