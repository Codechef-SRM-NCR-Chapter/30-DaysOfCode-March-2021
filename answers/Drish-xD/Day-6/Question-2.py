# Program for sum of odd length sub arrays using nested loop :)

def array2(a):
    sol = 0         # Empty variable to store the sum of odd subarrays
    length = len(a)     # It finds the length of the array
    for i in range(length):     # Looping from 0 to length of array
        for j in range(i, length, 2):       # Loop to find all the odd-length sub array's index
            for k in range(i, j + 1):       # Loop to find all the element's index that are in odd-length subarrays
                sol += a[k]         # adding all the elements to find final solution
    return sol


lst = list(map(int, input("Enter the elements of the list *with space b/w the numbers* : ").split()))
print("The array is :", lst)

print("The sum of all possible odd length subarrays of a array is :", array2(lst))
