# import sys

n = int(input())
array = list(map(int,input().split()))
steps = 0
for i in range(0,len(array)-1):
    if(array[i] > array[i+1]):
        steps+=(array[i]-array[i+1])
print(steps)
