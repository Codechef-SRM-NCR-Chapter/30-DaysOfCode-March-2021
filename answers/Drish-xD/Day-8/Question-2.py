# Program to return the maximized sum :)


def max_sum():
    arr = list(map(int, input("Enter the elements of the list *with space b/w the numbers* : ").split()))
    l = len(arr)        # calculating length of array
    arr.sort()          # Sorting list in ascending order
    sol = 0             # Empty variable for storing answer

    for i in range(0, l, 2):    # logic of question
        sol += arr[i]

    return sol


print(max_sum())
