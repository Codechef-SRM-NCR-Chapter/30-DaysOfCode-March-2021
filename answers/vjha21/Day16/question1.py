""" Given non-increasing order sorted binary array
    Count the number of 1s in it.
"""

## Using Binary search to achieve soln in 0(logn)
def count_ones(array, low, high):
    if high >= low:
        middle = low + (high - low) // 2
        if (middle == high or array[middle + 1] == 0) and array[middle] == 1:
            return middle + 1
        if array[middle] == 1:
            return count_ones(array, (middle + 1), high)
        return count_ones(array, low, middle - 1)


if __name__ == "__main__":
    array = [1, 1, 1, 1, 0, 0, 0]
    print(count_ones(array, 0, len(array)))