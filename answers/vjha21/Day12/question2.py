"""Count number of substrings that start and end with 1
    if there is no such combination print 0
"""


def generate_substrings(string):
    sub_strings = [
        string[i:j] for i in range(len(string)) for j in range(i + 1, len(string) + 1)
    ]
    return sub_strings


def count_substrings(sub_string):
    count = 0
    for element in sub_string:
        if element[0] == "1" and element[-1] == "1":
            count += 1
    return count


if __name__ == "__main__":
    string = "1111"
    print(generate_substrings(string))
    print(count_substrings(generate_substrings(string)))