#For the output shown in picture enter the array as [2,3,5,1,3] and extra candies=3
print("Enter the candies each kid has: ")
candies=[]
for i in range(5):
    element=int(input())
    candies.append(element)
extraCandies=int(input("Enter no. of extra candies: "))
l=len(candies)
ans=[]
for i in range(l):
    if candies[i]+extraCandies >= max(candies):
        ans.append(True)
    else:
        ans.append(False)
print(ans)