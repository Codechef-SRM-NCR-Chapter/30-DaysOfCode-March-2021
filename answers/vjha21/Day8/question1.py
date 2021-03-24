##Return sum of all unique elements of an array


def unique_element(array):
    n = len(array)
    unique_elements = []
    array.sort()
    if array[0] != array[1]:
        unique_elements.append(array[0])
    for i in range(1, n - 1):
        if array[i] != array[i + 1] and array[i] != array[i - 1]:
            unique_elements.append(array[i])
    if array[n - 2] != array[n - 1]:
        unique_elements.append(array[n - 1])

    return sum(unique_elements)


if __name__ == "__main__":
    nums = [1, 2, 3, 2]
    print(unique_element(nums))
