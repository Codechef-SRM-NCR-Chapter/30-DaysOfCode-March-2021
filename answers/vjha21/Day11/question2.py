""" For a string and pattern, count for each pattern the number
of times it appears in the string """


def check_pattern_count(string, pattern):
    pattern_count = 0
    string_length, pattern_length = len(string), len(pattern)
    for i in range(0, string_length - pattern_length - 1):
        temp_pattern_extract = string[i : i + pattern_length]
        if pattern == temp_pattern_extract:
            pattern_count += 1
    return pattern_count


if __name__ == "__main__":
    """string = "aybabtu"
    pattern = "a"
    print(check_pattern_count(string, pattern))"""
    string = input("Enter a string to check for patterns : ")
    no_of_patterns = int(input())
    pattern_count = {}
    for _ in range(no_of_patterns):
        pattern = input("Enter a pattern to check in the string above : ")
        pattern_count[pattern] = check_pattern_count(string, pattern)
    print(pattern_count)
