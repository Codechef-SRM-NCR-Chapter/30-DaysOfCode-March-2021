def helper(N):
    if (N <= 2):
        print ("NO")
        return
    value = (N * (N + 1)) // 2
    if(value%2==1):
        print ("NO")
        return
    s1 = []
    s2 = []
    
    if (N%2==0):
        shift = True
        start = 1
        last = N
        while (start < last):
            if (shift):
                s1.append(start)
                s1.append(last)
                turn = 0           
            else:
                s2.append(start)
                s2.append(last)
                turn = 1
                
            start += 1
            last -= 1
    else:
        rem = value // 2
        vis = [False] * (N + 1)
        for i in range (1, N + 1):
            vis[i] = False
        vis[0] = True
        for i in range (N , 0, -1):
            if (rem > i):
                s1.append(i)
                vis[i] = True
                rem -= i           
            else:
                s1.append(rem)
                vis[rem] = True
                break
        for i in range (1, N + 1):
            if (not vis[i]):
               s2.append(i)
    s1.sort()
    s2.sort()
    print("YES")
    print (len(s1))
    print(s1)
    print(len(s2))
    print(s2)


n = int(input())
helper(n)
