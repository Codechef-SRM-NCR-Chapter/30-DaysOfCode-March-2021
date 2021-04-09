def maxSubarraySum(a,size):
    p_max=a[0]
    curr_max=a[0]
    for i in range(1,size):
        curr_max=max(a[i],curr_max+a[i])
        p_max=max(p_max,curr_max)
    return p_max

n=int(input("Enter no of elements: "))
arr=[]
print("Enter array:")
for i in range(n):
    elem=int(input())
    arr.append(elem)
print("Output:",maxSubarraySum(arr,len(arr)))