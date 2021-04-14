def findAns(N):
    if (N <= 2):
        print ("NO")
        return
    value = (N * (N + 1)) // 2
    if(value & 1):
        print ("NO")
        return
    v1 = []
    v2 = []
    if (not (N & 1)):
        turn = 1
        start = 1
        last = N
        while (start < last):
            if (turn):
                v1.append(start)
                v1.append(last)
                turn = 0           
            else:
                v2.append(start)
                v2.append(last)
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
                v1.append(i)
                vis[i] = True
                rem -= i           
            else:
                v1.append(rem)
                vis[rem] = True
                break
        for i in range (1, N + 1):
            if (not vis[i]):
               v2.append(i)
 
    
    print ("YES""\n" "Size of subset 1 is: ", end = "")

    print (len( v1))

    print ("Elements of the subset are: ", end = "") 

    for c in v1:
      print (c, end = " ")
    print ()

    print ("Size of subset 2 is: ", end = "")

    print(len( v2))

    print ("Elements of the subset are: ", end = "")     

    for c in v2:
       print (c, end = " ")

inp = int(input("Enter number: "))

findAns(inp)
