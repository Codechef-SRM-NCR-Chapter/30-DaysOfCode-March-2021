##calculate the sum of all possible odd-length subarrays

def array_sum_calculator(array):
    max_array_length = len(array)
    sub_array = generate_sub_arrays(array)
    print(sub_array)

    sum_of_subarrays = sum(sub_array)
    return sum_of_subarrays

def generate_sub_arrays(array):
    sub_array = []
    max_length = len(array)

    for i in range(max_length):
        for j in range(i, max_length, 2):
            for k in range(i, j+1, 1):
                sub_array.append(array[k])
    
    return sub_array


    



if __name__ == "__main__":
    array = [1,4,2,5,3]
    print(array_sum_calculator(array))