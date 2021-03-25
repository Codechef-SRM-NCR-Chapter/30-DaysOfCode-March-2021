# Program to return the target Sum :)

def target_sum(nums, target):
    sol = []        # Empty list to add answers
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:     # Checking condition
                s = i, j
                sol.append(s)       # Adding to empty list
    return sol


# Inputting the answers
arr = list(map(int, input("Enter the elements of the list *with spaces b/w the numbers* :").split()))
target_num = int(input("Enter the Target Number :"))

# Recalling the function
print(target_sum(arr, target_num))