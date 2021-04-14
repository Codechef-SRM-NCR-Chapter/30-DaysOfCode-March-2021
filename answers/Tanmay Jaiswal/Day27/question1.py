import numpy as py
import sys

print("Input:")

# l is len of arr, r is rotation count
# r is num of queries
l_r_q = list(map(int,input().split()))
arr = py.array(input().split()).astype(int)
l = int(l_r_q[0])

if len(arr) != l:
    print("length should be equal to:",l_r_q[0])
    sys.exit()

round = 0

while (round < int(l_r_q[1])):
    first_dig = arr[0]
    for i in range(l):
        if i == 0:
            arr[i] = arr[-1]
        else:
            second_dig = arr[i]
            arr[i] = first_dig
            first_dig = second_dig
    round+=1

query = []

for i in range(int(l_r_q[2])):
    query.append(int(input()))

print("\nOutput:")
for i in query:
    print(arr[i])
