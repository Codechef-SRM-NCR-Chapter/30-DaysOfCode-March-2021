def  count_arr_binary(var):
    count = 0
    while var:
        count += var % 2
        var = var // 2
    return count


arr = list(map(int, input("Enter nums with space").split()))
arr_new = [(arr[i], i) for i in range(len(arr))]
sort_arr = sorted(arr_new, key=lambda x: count_arr_binary(x[0]), reverse=True)
sort_arr = [x[0] for x in sort_arr]
print(sort_arr)
