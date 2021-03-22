Candies = [int(x) for x in input("Enter the numbers with space: ").split()]
extraCandies=int(input("Enter the number of extra candies: "))
Output=[ ]
i=0
while(i<len(Candies)):
    if(Candies[i]+extraCandies>=max(Candies)):
        Output.append("True")
    else:
        Output.append("False")
    i+=1
print(Output)
