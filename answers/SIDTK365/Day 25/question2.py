def helper(x,y,X,Y):
    if(x==X and y==Y):
        return 0
    if(x > X or y > Y):
        return float('inf')
    ans = 1 + min(helper(x+1,y,X,Y),helper(x+1,y+1,X,Y))
    return ans


t = int(input())
while t > 0:
    X,Y = map(int,input().split())
    print(helper(0,0,X,Y))
    t-=1
