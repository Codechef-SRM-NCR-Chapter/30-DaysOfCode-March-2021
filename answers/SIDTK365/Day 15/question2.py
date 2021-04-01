def helper(m,n):
    if(m==1 or n==1):
        return 1

    return helper(m-1,n) + helper(m,n-1)


m = int(input())
n = int(input())
ans = helper(m,n)
print(ans)
