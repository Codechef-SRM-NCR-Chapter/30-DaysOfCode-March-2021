##To print the sum of the following series
## 1 + 12 + 123 + 1234 + ... + n

def series_generator(n):
    end_point = n
    series = [1]
    
    for i in range(1, end_point):
        next_in_series = (series[i - 1] * 10) + (i + 1)
        series.append(next_in_series)
    
    return series_sum_calculator(series)

def series_sum_calculator(series):
    sum_of_series = 0
    for element in series:
        sum_of_series = sum_of_series + element
    
    return sum_of_series

if __name__ == "__main__":
    #print(series_generator(13))
    number = int(input("Enter a number upto which you want to see the sum of the series : "))
    print(series_generator(number))
