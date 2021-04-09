""" To remove consecutive repeated digits from an integer, using stack. """


def remove_duplicates(num):
    stack = []
    index = 0

    while index < len(num):
        """ BASE CASE : If stack is empty or top of the stack is not equal to the current digit. """
        if len(stack) == 0 or num[index] != stack[-1]:
            stack.append(num[index])
            index += 1
        else:
            stack.pop()
            index += 1
    if len(stack) == 0:
        return "EMPTY STACK"
    else:
        return stack


if __name__ == "__main__":
    num = "1222444"
    print(*remove_duplicates(num))
