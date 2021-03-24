##Group integers of array into pairs suc that sum of min(Ai,Bi) of all i is maximized


def check_min_sum(integer_pairs):
    sum_of_pairs = 0
    for pair in integer_pairs:
        sum_of_pairs += min(pair)
    return sum_of_pairs


def generate_pair(array):
    array.sort()
    integer_pairs = []
    for i in range(0, len(array) - 1, 2):
        pair = [array[i], array[i + 1]]
        integer_pairs.append(pair)
    sum_pair = check_min_sum(integer_pairs)
    return sum_pair, integer_pairs


if __name__ == "__main__":
    nums = [1, 4, 3, 2]
    print(generate_pair(nums))
