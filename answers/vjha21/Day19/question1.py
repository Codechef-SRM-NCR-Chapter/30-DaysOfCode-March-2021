"""
    To find missing and twice occuring element from an unsorted array
"""


def find_twice_occuring(array):
    array.sort()
    for i in range(0, len(array)):
        if array[i] in array[i + 1 :]:
            return array[i]


def missing_element(array):
    array.sort()
    for i in range(0, len(array)):
        if array[i] != array[i + 1] + 1:
            return array[i] + 1


if __name__ == "__main__":
    ar = [1, 3, 3]
    print(find_twice_occuring(ar))
    print(missing_element(ar))