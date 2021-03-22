def calculate(arr):
    length = len(arr)
    if length < 3:
        return get_sum(arr)
    result = get_sum(arr)
    current_len = 3
    counter = 0
    while current_len <= length:
        last = counter+current_len
        if last > length:
            counter = 0
            current_len = get_next_odd_num(current_len)
            continue
        result += get_sum(arr[counter: last])
        counter += 1
    return result


def get_next_odd_num(num):
    return num + 2


def get_sum(arr):
    result = 0
    for i in arr:
        result += i
    return result


arr = [int(x) for x in input('Enter numbers seprated by space: ').split()]
print(calculate(arr))
