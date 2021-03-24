##Create a target array in the given order
def generate_target_array(nums, index):
    length_of_num = len(nums)
    target_array = []

    for i in range(0, length_of_num):
        if index[i] >= length_of_num:
            target_array.append(nums[i])
        else:
            target_array.insert(index[i], nums[i])
    return target_array


if __name__ == "__main__":
    nums = [0, 1, 2, 3, 4]
    index = [0, 1, 2, 2, 1]
    print(*generate_target_array(nums, index))