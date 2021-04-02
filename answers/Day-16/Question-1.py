# Program to count the number of 1's in a binary array :)


def count_1(array, x, y):

    while y >= x:
        z = (x + y) // 2            # Finding mid term

        if array[y] == 0:      # If last term of array is 0, so count of 1 = 0
            return 0

        elif array[x] == 1:     # If first term of array is 1, so count of 1 = len of array
            return y - x + 1

        else:
            return count_1(array, z + 1, y) + count_1(array, x, z)     # Using recursion

    return False


arr = map(int, input("Enter the elements of binary array *With spaces b/w number* :").split())
arr = sorted(arr)       # Sorting the list in increasing order
x = 0
y = len(arr) - 1
print(count_1(arr, x, y))
