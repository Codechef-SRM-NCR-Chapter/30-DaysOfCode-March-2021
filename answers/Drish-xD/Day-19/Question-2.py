# Program to Count triplets with sum smaller than X :)
from itertools import combinations


def condition(val):
    global target
    return sum(val) < target        # Condition of the program
    

Arr = list(map(int, input("Enter the elements of list *with spaces b/w each element* :").split()))
target = int(input("Enter the target number :"))
triplets = list(filter(condition, list(combinations(arr, 3))))  # Making combinations of 3 and filter acc to condition
print(len(triplets))        # Printing the number of reqired triplets 
