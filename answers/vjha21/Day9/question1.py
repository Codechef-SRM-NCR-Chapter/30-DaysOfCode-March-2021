##From a given array, return indices of the numbers such that they add up to target.
def check_sum(array, key):
    for i in range(0, len(array) - 1):
        for j in range(i + 1, len(array) - 1):
            if (array[i] + array[j]) == key:
                return [i, j]


if __name__ == "__main__":
    nums = [2, 7, 11, 15]
    target = 9
    print(check_sum(nums, target))
