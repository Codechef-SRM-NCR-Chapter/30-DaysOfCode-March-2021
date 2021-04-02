""" Reverse the words of a string using recursion """


def reverse_string(sentence, rev_string):
    rev_string.append(sentence[-1])
    if len(sentence[:-1]) >= 1:
        return reverse_string(sentence[:-1], rev_string)


if __name__ == "__main__":
    sentence = "CAT IS RUNNING"
    string = sentence.split()
    rev_str = []
    reverse_string(string, rev_str)
    print(*rev_str)