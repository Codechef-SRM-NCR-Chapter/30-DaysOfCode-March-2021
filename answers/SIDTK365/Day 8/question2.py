arr = list(map(int, input().split()))
arr.sort()
sum = 0
for i in range(0,len(arr),2):
    sum+=arr[i]
print(sum)

# Since to maximise the sum we'll always select the 1st of the adjacent 2 elements(as we need to minimise a,b) from a sorted array starting from 0 to len(arr)
