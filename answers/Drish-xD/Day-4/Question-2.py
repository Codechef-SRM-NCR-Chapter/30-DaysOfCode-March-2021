# Program to print a pattern :)

n = int(input("Enter a Number : "))  # Enter number of rows

num = 1

for i in range(1, n + 1):  # looping from 1 to n for number of rows
    for j in range(1, i + 1):  # Looping from 1 to n for number of columns
        print(num, end=" ")  # Print the number
        num = num + 1
    print("")  # For making new rows
