def pattern(n):
    n1=1
    for i in range(0,n):
        for j in range(0,i+1):
            print(n1,end=" ")
            n1=n1+1
        print("\r")
pattern(4)
