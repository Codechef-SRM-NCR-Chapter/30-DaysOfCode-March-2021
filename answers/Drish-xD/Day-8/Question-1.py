# Program to return sum of all unique elements of a array :)


def unique_sum():
    arr = list(map(int, input("Enter the elements of the list *with space b/w the numbers* : ").split()))
    sol = 0     # Empty variable for solution
    for i in arr:       # Loop to access all elements in the array
        if arr.count(i) == 1:       # Condition to Check the number is unique or not
            sol += i        # Adding the unique numbers
    return sol


print(unique_sum())
