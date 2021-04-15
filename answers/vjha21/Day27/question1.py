""" To perform a number of circular rotations on given array and return the values 
    of the elements at the given indices.
        Right circular rotation : One rotation operation moves last array element to the first
        position and shifts all remaining elements right one. 
"""


def rotation(array):
    last_element = array[-1]
    array.pop()
    # array.append(last_element)

    rotated_array = []
    rotated_array.append(last_element)
    for el in array:
        rotated_array.append(el)
    return rotated_array


if __name__ == "__main__":
    l_r_q = input("Enter the length of array, rotation count no. of queries :")
    l, r, q = l_r_q.split()
    array = list(map(int, input("Enter the array elements :").strip().split()))[
        : int(l)
    ]

    for i in range(int(r)):
        array = rotation(array)

    for i in range(0, int(q)):
        index = input("Enter the index of array to print : ")
        print(array[int(index)])
    print("Rotated array : ", array)

    # print(rotation(array))
