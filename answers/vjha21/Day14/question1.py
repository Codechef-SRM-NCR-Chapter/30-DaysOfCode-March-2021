""" Remove adjacent duplicates of charecter from the input string using recursion """


def remove_duplicate_adj(string):
    raw_array = []
    raw_array.append(string[0])
    for i in range(1, len(string) - 1):
        if string[i] == string[i - 1]:
            continue
        else:
            raw_array.append(string[i])
    return raw_array


if __name__ == "__main__":
    # string = "XAAABBCDDDEEFGHHIJJK"
    string = "AABBBCDDD"
    print(remove_duplicate_adj(string))
