n=int(input())
def series(n):
    a=''
    l=[]
    for i in range (1,n+1):
        a+=str(i)
        l.append(int(a))
    print("Sum of the series is: ", sum(l))
series(n)
