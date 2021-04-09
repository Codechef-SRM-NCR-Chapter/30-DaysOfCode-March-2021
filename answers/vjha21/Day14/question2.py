""" Adding elements of two arrays using recursion """


def add_arrays(index, array_one, array_two, sum_array):
    sum_array.append(array_one[index] + array_two[index])
    index += 1
    if index < len(array_one) and index < len(array_two):
        return add_arrays(index, array_one, array_two, sum_array)
    else:
        return


if __name__ == "__main__":
    array_one = [23, 5, 2, 7, 87]
    array_two = [4, 67, 2, 8, 0]
    sum_array = []
    index = 0
    add_arrays(index, array_one, array_two, sum_array)
    print(sum_array)