# Program to print the pattern :)


for i in range(1, 11):      # looping from 1 to 11
    if i in [2, 3, 5, 7]:
        print("#", end=" ")     # Print # in position (2, 3, 5, 7)
    else:
        print("*", end=" ")     # Print * in other position
    if i in [1, 3, 6]:
        print('\r')     # for moving the cursor at the start of the new line
