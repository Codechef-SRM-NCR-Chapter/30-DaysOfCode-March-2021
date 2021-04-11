t=int(input("Enter no. of test cases: "))
for i in range(t):
    print("Enter value of x and y:",end=" ")
    x,y=map(int,input().split())
    p=-1
    if(x>0 and y>=0):
        if(y/x<=1):
            p=x;
    else:
        if(x==0 and y==0):
            p=0;
    if(p==-1):
        print("Cannot reach the destination.")
    else:
        print("OUTPUT:",p)
