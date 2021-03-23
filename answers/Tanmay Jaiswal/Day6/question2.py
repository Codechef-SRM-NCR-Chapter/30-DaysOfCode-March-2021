#program to print sum of all odd length SUBARRAYS

n= int(input())

arr = [int(x) for x in str(n)]
print("ARR = ",arr)

sum = 0
l = len(arr)

for i in range(l):
    for j in range(i, l, 2):
        for k in range(i, j + 1, 1):
            sum += arr[k]

print(sum)
