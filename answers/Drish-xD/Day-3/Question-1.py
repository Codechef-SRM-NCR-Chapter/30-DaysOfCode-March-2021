# Program to print the sum of the series :)

n = int(input("Enter the Number of terms : "))

series = 0
sum = 0

print("The sum of the series (", end=" ")

for i in range(1, n + 1):
    series = series * 10 + i
    print(series, end=" ")
    sum = sum + series

print(") is", sum)
