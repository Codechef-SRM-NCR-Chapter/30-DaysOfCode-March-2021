can = input("Enter no. of candies")
candies = can.split()
candies = [int(i) for i in candies]
extracandies = int(input("Enter extra candies"))
m = max(candies)
t = []

candies[:] = [x + extracandies for x in candies]

for i in range(0,len(candies)):
    
    if candies[i] >= m:
        t.insert(i , "True") 
    else:
        t.insert(i , "False")
print(t)
