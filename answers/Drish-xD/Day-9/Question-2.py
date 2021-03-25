# Program to return largest sum contiguous Subarray :)

def largest_sum_subarray(nums):
    curr_max = 0
    max_max = 0

    for i in range(len(nums)):
        curr_max += nums[i]
        if curr_max < 0:
            curr_max = 0
        elif max_max < curr_max:
            max_max = curr_max
    return max_max


# Inputting the values
arr = list(map(int, input("Enter the elements of the list *with spaces b/w the numbers* :").split()))

# Recalling the function
print(largest_sum_subarray(arr))