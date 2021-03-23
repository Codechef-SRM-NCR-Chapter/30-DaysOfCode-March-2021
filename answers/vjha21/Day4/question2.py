##To print the following pattern
##1
##2 3
##4 5 6
##7 8 9 10

def patter_generator(end_point) :
    element = 1
    for row in range(0, end_point):
        for column in range(0, row + 1):
            print(element, end=" ")
            element = element + 1
        print("\r")

if __name__ == "__main__" :
    number = int(input("Enter number of rows upto which you want to print pattern : "))
    patter_generator(number)

