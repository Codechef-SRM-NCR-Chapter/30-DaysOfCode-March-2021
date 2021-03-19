# Program to determine if the number is unique or not :)

n = input("Enter a Number : ")  # Enter the number u want to check

num = [i for i in n]  # Splitting the number into a list

s = True

for x in range(len(n)):
    for y in range(len(n)):
        if x != y:
            if num[x] == num[y]:  #
                s = False

# print the result
if not s:
    print(n + " is not a unique number")
else:
    print(n + " is a unique number")
