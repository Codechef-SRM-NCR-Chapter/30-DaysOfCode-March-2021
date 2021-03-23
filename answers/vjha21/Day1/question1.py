##Write a program to print the following series:
##3, 12, 33, 72,...,n terms. Where n is a user input parameter.

def pattern_generator(n):
    pattern = []
    for counter in range(1,n):
        next_element = (counter**3) + counter*2
        pattern.append(next_element)
    return pattern

if __name__ == "__main__":
    input_number = int(input("Enter a number upto which you want to print the patter: "))
    print(pattern_generator(input_number))