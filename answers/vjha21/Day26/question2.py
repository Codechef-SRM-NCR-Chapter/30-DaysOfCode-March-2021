""" To modify the array so that it is non-decreasing. """


def modify_array(array):
    moves = 0
    for i in range(0, len(array) - 1):
        if array[i] > array[i + 1]:
            moves += array[i] - array[i + 1]
            array[i + 1] += array[i] - array[i + 1]
    return moves, array


if __name__ == "__main__":
    test_case = int(input("Enter the numbe of test cases : "))
    while test_case != 0:
        n = int(input("Enter the size of array : "))
        array = list(map(int, input("Enter the array elements :").strip().split()))[:n]
        print(modify_array(array))
        test_case -= 1
