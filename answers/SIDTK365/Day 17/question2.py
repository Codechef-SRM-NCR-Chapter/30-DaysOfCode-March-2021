def helper(lst,n):
    res = 0
    target = 0
    for i in range(n):
        s = 0
        for j in range(i,n):
            s+=lst[j]

            if s == target:
                res+=1
    print(res)



n = int(input())
lst = list(map(int, input().split()))
helper(lst,n)
