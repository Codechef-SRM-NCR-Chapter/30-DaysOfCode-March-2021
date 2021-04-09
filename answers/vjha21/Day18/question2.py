"""
    To sort the array to count the set bits in binary representation
    of array elements.
"""


def count_set_bits(num):
    count = 0
    while num:
        if num & 1:
            count += 1
        num = num >> 1
    return count


def sort_setbit_based(array):
    count = []
    for i in range(len(array)):
        count.append([(-1) * count_set_bits(array[i]), array[i]])
    count.sort(key=lambda x: x[0])
    output = []
    for i in range(len(count)):
        output.append(count[i][1])
    return output


if __name__ == "__main__":
    arr = [5, 2, 3, 9, 4, 6, 7, 15, 32]
    print(sort_setbit_based(arr))