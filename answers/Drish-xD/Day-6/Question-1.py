# Program related to array :)

def pawri(candies, extra_candies):
    max_candies = 0     # Empty variable to store the maximum no of candies
    final = []
    for i in candies:
        max_candies = max(candies)      # Finding maximum number of candies
    for i in candies:
        if (i + extra_candies) >= max_candies:
            final.append(True)      # Storing True in final list
        else:
            final.append(False)     # Storing False in final list
    print(final)            # Printing final list


n = int(input("Enter number of Kids : "))
c = list(map(int, input("Enter the number of candies each kid have *with space b/w the numbers* : ").split()))
extra = int(input(" Enter number of extra candies : "))

pawri(c, extra)
