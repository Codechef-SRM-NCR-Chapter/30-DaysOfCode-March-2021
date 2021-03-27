# Program to count the pattern in a string :)


def count(string,  patterns):
    x = string.count(patterns)      # Counting the patterns
    return x


st = input("Enter the string :")
k = int(input("Enter the no of patterns :"))
sol = []                           # Empty list to store answers

for i in range(k):
    pattern = input("enter the pattern :")      # To input multiple pattern
    sol.append(count(st, pattern))              # Adding the count to the list

for i in sol:
    print(i)
