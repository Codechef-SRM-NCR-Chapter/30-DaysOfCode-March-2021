# Program to sort the array according to count of set bits in binary representation :)


def count_1(var):
    count = 0
    while var:
        count += var % 2
        var = var // 2
    return count


arr = list(map(int, input("Enter the elements of array *With spaces b/w number* :").split()))
arr_new = [(arr[i], i) for i in range(len(arr))]
sort_list = sorted(arr_new, key=lambda x: count_1(x[0]), reverse=True)
sort_list = [x[0] for x in sort_list]
print(sort_list)
