s = 1
c = 0
n = int(input())
for i in range(n):
    for j in range(i):
        for k in range(2,s):
            if(s%k==0):
                c = 1
        if(s==1):
            c = 1
        if(c==0):
            print("# ",end="")
        else:
            print("* ",end="")
        c = 0
        s = s+1
    print()
