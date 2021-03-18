def series_ele(n):
    pattern = []
    for i in range(1,n):
        next_element = (i**3) + i*2
        pattern.append(next_element)
    return pattern

if __name__ == "__main__":
    input_number = int(input("Enter a number upto which you want to print the patter: "))
    print(series_ele(input_number))

