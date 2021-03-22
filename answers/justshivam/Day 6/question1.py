def calculate(candies, extra_candies):
    max_val = 0
    result = []
    for i in candies:
        max_val = max(max_val, i)
    for i in candies:
        if (i + extra_candies) >= max_val:
            result.append(True)
            continue
        result.append(False)
    return result


candies = [int(x) for x in input('Enter numbers seprated by space: ').split()]
extra_candies = int(input('Enter extra candies: '))
print(calculate(candies, extra_candies))
