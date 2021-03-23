##To print first 50 terms of fibonacci series

def fibonacci_series_generator(end_point):
    result = [0, 1]
    for i in range(2, end_point):
        next_element = result[i - 2] + result[i - 1]
        result.append(next_element)
    return result

if __name__ == "__main__":
    n = 50
    print("First 50 elements of the fibonacci series are : ")
    print(fibonacci_series_generator(n))
