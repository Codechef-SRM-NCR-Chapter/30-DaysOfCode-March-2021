arr = input("Enter number")
num = arr.split()
num = [int(i) for i in num]

z = []

def maxsubarraysum(x,y):
    max1 = x[0]
    max2 = x[0]
    for i in range(1 , y):
        max2 = max(x[i] , max2 + x[i])
        max1 = max(max1 , max2)
    return max1

print(maxsubarraysum(num , len(num)))
