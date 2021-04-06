"""
    Find the number of integers less than N in the sample space S of
    square numbers
"""
import math


def find(N):
    sample_space = []
    for i in range(1, N):
        element = i ** 2
        sample_space.append(element)
    count = 0
    for element in sample_space:
        if element < N:
            count += 1
    return count


if __name__ == "__main__":
    """ N = 60 """
    N = int(input("Enter a number to check for number of squares smaller than it: "))
    print(find(N))