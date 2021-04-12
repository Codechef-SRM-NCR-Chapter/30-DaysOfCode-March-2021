t = int(input())
while t > 0:
    moves = int(input())
    print(2*moves)  
    # Since y has no contribution and for all values of x we consider the absolute value therefore
    # the answer will be 2*moves i.e. in this case 2*1=2 (abs(1)+abs(-1)) 
    t-=1
