""" To find the transition point in a binary sorted array """

# Using binary search algorithm
def transition_point_finder(array, low, high):
    if high >= low:
        middle = low + (high - low) // 2
        if (middle == high or array[middle + 1] == 1) and array[middle] == 0:
            return middle + 1
        if array[middle] == 1:
            return transition_point_finder(array, low, middle - 1)
        return transition_point_finder(array, middle + 1, high)


if __name__ == "__main__":
    array = [0, 0, 0, 1, 1]
    print(transition_point_finder(array, 0, len(array)))
