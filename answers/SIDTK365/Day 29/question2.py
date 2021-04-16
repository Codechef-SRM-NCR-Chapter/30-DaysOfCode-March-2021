t = int(input())
while t > 0:
    n = int(input())
    isTrue = False
    if(n%10 > 0):
        n = n%2021
        if(n%2020==0):
            isTrue = True
    else:
        n = n%2020
        if(n%2021==0):
            isTrue = True
    if(isTrue):
        print("YES")
    else:
        print("NO")
    t-=1
