""" Find the number of steps required to convert the given array to zero aray. """


def array_to_zero(array):
    steps = 0
    while True:
        zeros = 0
        for i in range(len(array)):
            if array[i] % 2 == 1:
                array[i] -= 1
                steps += 1
            if array[i] == 0:
                zeros += 1
        if zeros == len(array):
            break
        for j in range(len(array)):
            array[j] = array[j] // 2
        steps += 1

    return steps, array


if __name__ == "__main__":
    arr = [7, 8, 9]
    print(array_to_zero(arr))