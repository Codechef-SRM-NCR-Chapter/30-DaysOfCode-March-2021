"""
    To find count of triplets with the sum smaller than the given sum value X
"""


def find_triplets_sums_smaller_than_X(array, X):
    array.sort()
    count = 0
    for i in range(0, len(array) - 2):
        j = i + 1
        k = len(array) - 1
        while j < k:
            if array[i] + array[j] + array[k] >= X:
                k -= 1
            else:
                count += k - j
                j += 1
    return count


if __name__ == "__main__":
    arr = [-2, 0, 1, 3]
    x = 2
    print(find_triplets_sums_smaller_than_X(arr, x))
