#destn=destination
def destn(a,b,X,Y):
    if(a==X and b==Y):
        return 0
    if(a > X or b > Y):
        return float('inf')
    sol = 1 + min(destn(a+1,b,X,Y),destn(a+1,b+1,X,Y))
    return sol
a = int(input())
while a > 0:
    X,Y = map(int,input().split())
    print(destn(0,0,X,Y))
    a-=1
