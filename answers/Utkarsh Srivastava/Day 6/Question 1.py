candies = input("Enter Candies ").split()
max = 0
result = [0]*len(candies)
extra = int(input("Enter extra candies "))
for i in range(len(candies)):
    candies[i] = int(candies[i])
    if int(candies[i])>max:
        max = candies[i]
for i in range(len(candies)):
    if(candies[i]+extra>=max):
        result[i] = True
    else:
        result[i] = False
print(result)
