"""
    To find and print the number of letter a's in the first n letters of the infinite string
"""


def generate_string(string, count):
    index, curr_count = 0, 0
    generated_string = []
    while curr_count < count:
        if index >= len(string):
            index = 0
        generated_string.append(string[index])
        index += 1
        curr_count += 1
    print("Frequency of a in the generated string is : ", count_a(generated_string))
    return generated_string


def count_a(string):
    count = 0
    for alphabet in string:
        if alphabet == "a":
            count += 1
    return count


if __name__ == "__main__":
    string = "abcac"
    print("Generated substring : ", generate_string(string, 10))
