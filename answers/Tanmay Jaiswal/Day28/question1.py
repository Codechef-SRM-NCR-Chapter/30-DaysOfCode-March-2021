print("Input:")
N = int(input())

print("\nOutput:")
def set(N):
    if (N <= 2):
        print ("No")
        return
    
    value = (N * (N + 1)) // 2

    if(value & 1):
        print ("No")
        return

    s1 = []
    s2 = []

    if (not (N & 1)):
        turn = 1
        start = 1
        last = N
         
        while (start < last):
            if (turn):
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
    
    print("Yes")
    print("",end="")
    print(len(s1))
    print("",end="")
     
    for c in s1:
        print(c,end=" ")
 
    print ()

    print("",end="")
    print(len(s2))
    print("",end="")
     
    for c in s2:
        print(c,end=" ")

set(N)
