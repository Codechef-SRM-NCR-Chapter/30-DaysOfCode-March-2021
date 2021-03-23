# printing series by using while loop :)

n = int(input("Enter a number : "))      # Enter number upto which series is required
x = 0                                 # Empty variable for storing list
y = 2
z = 1
while (z<=n):                         # While loop form 1 to n
    x=(z**3)+y                        # Logic of the question
    print(x,end=",")                  # printing the series
    y=y+2                             # incrementing y by 2
    z=z+1                             # incrementing z by 1