import math
n = int(input("Enter the number till where the series ius to be printed = "))
for i in range(1,n+1):
    k = math.pow(i,3)
    j = k + 2*i
    print(j)
