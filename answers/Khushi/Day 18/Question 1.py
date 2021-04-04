import math
def CountSquare(n):
    x = math.sqrt(n)
    return (math.ceil(x)-1)
n = int(input("Enter the value of n: "))
print("OUTPUT:",int(CountSquare(n)))