##To determine if the number entered is unique or not
## unique number is one whose digits are not repeated

def check_for_unique_number(number):
    num = str(number)
    length_of_number = len(num)
    digits_of_number = []

    for i in range(0, length_of_number) :
        digit = number % 10
        digits_of_number.append(digit)
        number = number//10
        
    return check_array_for_same_values(digits_of_number)

def check_array_for_same_values(array):
    #digit_one = 0
    for i in range(0, len(array)):
        for j in range(i + 1, len((array))):
            if array[j] == array[i] :
                return False
    
    return True


if __name__ == "__main__":
    #print(check_for_unique_number(1232443524243456))
    number = int(input("Enter a number to check you unique number : "))
    if check_for_unique_number(number) :
        print(f'{number} is a unique number.')
    else:
        print(f'{number} is not a unique number.')