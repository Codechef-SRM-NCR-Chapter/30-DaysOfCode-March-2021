""" To examine pairs and orders of {,},(,),[,] are correct in exp. """


def order_check(expression):
    stack = []
    brackets_open = ["(", "{", "["]

    for char in expression:
        if char in brackets_open:
            stack.append(char)
        else:
            if not stack:
                return False
            current_char = stack.pop()
            if current_char == "(":
                if char != ")":
                    return False
            if current_char == "{":
                if char != "}":
                    return False
            if current_char == "[":
                if char != "]":
                    return False
    if stack:
        return False
    return True


if __name__ == "__main__":
    """expression = "[()]{[()()]()}"
    expression2 = "[(])" """
    expression = str(
        input("Enter an expression of brackets to check if it is balanced : ")
    )
    if order_check(expression):
        print("BALANCED EXPRESSION : YES")
    else:
        print("BALANCED EXPRESSION : NO")