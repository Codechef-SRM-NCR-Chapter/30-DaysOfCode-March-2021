def helper(arr,n,x):
    ans = 0
    for i in range(0,n-2):
        j = i+1
        k = n-1
        while(j < k):
            if(arr[i]+arr[j]+arr[k] >=x):
                k-=1
            else:
                ans+=(k-j)
                j+=1
    return ans

n = int(input())
x = int(input())
arr = list(map(int, input().split()))
print(helper(arr,n,x))
