def maxSum(arr):
    curr_max = arr[0]
    t_max = arr[0]
    for i in range(1,len(arr)):
        curr_max = max(arr[i],arr[i]+curr_max)
        t_max = max(t_max,curr_max)
    print(t_max)

arr = list(map(int, input().split()))
length = len(arr)
maxSum(arr)

# Kadane's Algorithm 
