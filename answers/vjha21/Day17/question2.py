"""
    To find the total count of sub-arrays having their sum equal to 0
"""


def find_subarrays(array):
    hash_table = {}
    sub_arrays = []

    array_sum = 0
    for i in range(len(array)):
        array_sum += array[i]
        if array_sum == 0:
            sub_arrays.append((0, i))
        al = []
        if array_sum in hash_table:
            al = hash_table.get(array_sum)
            for it in range(len(al)):
                sub_arrays.append((al[it] + 1, i))
        al.append(i)
        hash_table[array_sum] = al
    output = []
    for element in sub_arrays:
        i, j = element[0], element[1]
        push = []
        for i in range(i, j + 1):
            push.append(array[i])
        output.append(push)

    return output


if __name__ == "__main__":
    A = [6, -1, -3, 4, -2, 2, 4, 6, -12, -7]
    print(f"The 4 sub-arrays are {find_subarrays(A)}")