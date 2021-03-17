# Pattern making using for loop :)

n = int(input("enter a number : "))      # Enter the number of rows do u want
for i in range(1, n+1):                  # looping from 1 to n+1
    print(" "*(n-i)+"*"*i)               # Printing the pattern