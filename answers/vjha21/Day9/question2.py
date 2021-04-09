##To find the contiguous subarray which has the largest sumans return its sum.
##Using Kadane's algorithm


def generate_sub_array(array):
    max_so_far = array[0]
    curr_max = array[0]

    for i in range(1, len(array)):
        curr_max = max(array[i], curr_max + array[i])
        max_so_far = max(max_so_far, curr_max)
    return max_so_far


if __name__ == "__main__":
    nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    print(generate_sub_array(nums))
