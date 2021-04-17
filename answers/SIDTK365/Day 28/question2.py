t = int(input())
while t > 0:
    n,k = map(int,input().split())
    lst = [0] * (n+1)
    num = n
    for i in range(2,n,2):
        if(k==0):
            break
        lst[i] = num
        num-=1
        k-=1
    if(k):
        print("-1",end='\n')
        continue
    curr = 1
    for i in range(1,n+1):
        if(lst[i]):
            continue
        else:
            lst[i] = curr
            curr+=1
    for i in range(1,n+1):
        print(lst[i],end=" ")
    print('\n')
    t-=1
