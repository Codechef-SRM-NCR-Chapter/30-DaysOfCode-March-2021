def kids_candies(candies, extra_candies):
    max_candies = 0    
    final = []
    for i in candies:
        max_candies = max(candies)      
    for i in candies:
        if (i + extra_candies) >= max_candies:
            final.append(True)     
        else:
            final.append(False)    
    print(final)           


n = int(input("Enter no of Kids : "))
c = list(map(int, input("Enter the no of candies each kid have  ").split()))
extra = int(input(" Enter no of extra candies : "))

kids_candies(c, extra)
