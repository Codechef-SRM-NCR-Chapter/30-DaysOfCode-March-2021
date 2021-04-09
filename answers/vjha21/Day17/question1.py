"""
    To find quadruple from the given array that sums to the given number
"""


def find_quadruple(array, key):
    hash_table = {}
    for i in range(len(array) - 1):
        for j in range(i + 1, len(array)):
            hash_table[array[i] + array[j]] = [i, j]

    for i in range(len(array) - 1):
        for j in range(i + 1, len(array)):
            sum_pair = array[i] + array[j]
            if (key - sum_pair) in hash_table:
                p = hash_table[key - sum_pair]
                if p[0] != i and p[0] != j and p[0] != i and p[1] != j:
                    return (array[i], array[j], array[p[0]], array[p[1]])


if __name__ == "__main__":
    A = [0, 0, 2, 1, 1]
    key = 3
    print(find_quadruple(A, key))
