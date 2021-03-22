Candies = [int(x) for x in input('Enter numbers seprated by space: ').split()]
extraCandies=int(input("Enter number of extra candies"))
Output=[]
i=0
while(i<len(Candies)):
    if(Candies[i]+extraCandies>=max(Candies)):
        Output.append('True')
    else:
        Output.append('False')
    i+=1
print(Output)
