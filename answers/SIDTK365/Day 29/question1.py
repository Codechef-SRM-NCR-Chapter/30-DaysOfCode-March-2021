def helper(lst1,lst2,n,x):
    lst1.sort(reverse=True)
    for i in range(0,n):
        if(lst1[i] + lst2[i] <= x):
            continue
        else:
            return False
    return True

t = int(input())
while t > 0:
    n,x = map(int,input().split())
    lst1 = list(map(int,input().split()))
    lst2 = list(map(int,input().split()))
    if(helper(lst1,lst2,n,x)):
        print("YES")
    else:
        print("NO")
    t-=1
