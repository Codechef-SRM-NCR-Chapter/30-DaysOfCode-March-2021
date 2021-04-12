""" To reverse the string by considering each word of the string,
    str as a single unit using stack
"""


def reverse_string(string):
    stack_in = []
    temp = ""
    for i in range(0, len(string)):
        if string[i] == " ":
            stack_in.append(temp)
            temp = ""
        else:
            temp += string[i]
    stack_in.append(temp)

    stack_out = []
    for i in range(0, len(stack_in)):
        stack_out.append(stack_in.pop())

    out_string = ""
    for el in stack_out:
        out_string += el
        out_string += " "

    return out_string


if __name__ == "__main__":
    string = "This is a string"
    print(reverse_string(string))