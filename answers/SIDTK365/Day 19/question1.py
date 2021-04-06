def helper(arr,n):
    count = [0]*(n+1)
    for i in range(0,n):
        count[arr[i]]+=1
    print(count)
    missing_num = 0
    duplicate_num = 0
    for i in range(1,n+1):
        if(count[i]==0):
            missing_num=i
        
        if(count[i]>1):
            duplicate_num=i
    print(duplicate_num,missing_num)


n = int(input())
arr = list(map(int, input().split()))
helper(arr,n)
