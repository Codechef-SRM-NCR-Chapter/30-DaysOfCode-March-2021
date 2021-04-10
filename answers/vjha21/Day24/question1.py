""" Generate all different strings that can be crated using its charecters """


def generate_all_strings(string, start, end):
    current = 0
    if start == end - 1:
        print(string)
    else:
        for current in range(start, len(string)):
            x = list(string)
            x[start], x[current] = x[current], x[start]
            generate_all_strings("".join(x), start + 1, end)

            x[start], x[current] = x[current], x[start]


if __name__ == "__main__":
    string = "ABC"
    generate_all_strings(string, 0, len(string))
