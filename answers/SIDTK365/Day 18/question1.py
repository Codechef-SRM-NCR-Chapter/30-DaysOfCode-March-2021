import math
n = int(input())
count = 0
for i in range(1,math.floor(math.sqrt(n))):
    count+=1
print(count)
