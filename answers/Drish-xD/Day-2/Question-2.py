# Program to check if number is Disarium Number or Nor :)


n = input("Enter a number: ")

num = [i for i in n]        # splitting the number into array of digits

a = 0                       # creating empty variable

for x in range(len(n)):
    a += int(num[x]) ** (x+1)     # Logic for Disarium Number


if a == int(n):            # Checks whether the sum is equal to the number itself
    print(n, "is a Disarium.")
else:
    print(n, "is not a Disarium.")