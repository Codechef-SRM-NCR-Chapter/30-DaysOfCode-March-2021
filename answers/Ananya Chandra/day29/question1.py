T= int(input("Enter the number of test cases\n"))
for i in range(T):
    n,x=input().split()
    n=int(n)
    x=int(x)
    a=input().split()
    b=input().split()
    for i in range(n):
        a[i]=int(a[i])
        b[i]=int(b[i])
    a.sort()
    b.sort()
    if a[0]+b[n-1]>x or b[0]+a[n-1]>x:
        print("NO")
    else:
        print("YES")
