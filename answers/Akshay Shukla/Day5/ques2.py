def Prime(n):
    if(n==1):
        return 0
    for i in range(2,n):
        if(n%i==0):
            return 0
    return 1

j=0
for i in range(0,4):
    for k in range(0,i+1):
        j=j+1
        if Prime(j)==1:
            print("# ",end="")
        else:
            print("* ",end="")
    print()
