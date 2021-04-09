# Program to find the transition point efficiently in a binary array :)


def trans_point(array, x, y):

    while y >= x:
        z = (x + y) // 2        # Finding mid term

        if array[z] == 0:
            x = z + 1       # Changing first term to mid term + 1

        elif array[z] == 1:

            if z >= 0 and array[z-1] == 0:
                return z
            else:
                y = z - 1
    return "No Transition Point"


arr = map(int, input("Enter elements of array *With spaces b/w number* :").split())
arr = sorted(arr)       # Sorting the list in increasing order
m = 0
n = len(arr) - 1
print("Transition Point is at index :", trans_point(arr, m, n))
