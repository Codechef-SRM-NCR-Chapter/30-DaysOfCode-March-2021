##To print each concatenated word present in
##the string in a seperate line as well to display the total number
##of words in the camelCase string


def camel_string_seperator(string):
    output_string = []
    no_of_strings = 0
    seperated_string = []
    string_length = len(string)
    for i in range(0, string_length):
        if string[i].isupper():
            seperated_string.append(string[i])
            for j in range(i + 1, string_length):
                if string[j].isupper():
                    break
                elif string[j].islower():
                    seperated_string.append(string[j])
        output_string.append(seperated_string)
        seperated_string = []
    while [] in output_string:
        output_string.remove([])
    no_of_strings = len(output_string)
    return [output_string, no_of_strings]


if __name__ == "__main__":
    in_string = "JavaScript"
    out_str, out_len = camel_string_seperator(in_string)
    for string_out in out_str:
        print(*string_out)
    print(out_len)