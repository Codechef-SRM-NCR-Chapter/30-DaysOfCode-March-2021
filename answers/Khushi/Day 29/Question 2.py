def rec(x,a,b,p,n):
    if(x>n):
        return
    if(p[x]):
        return
    p[x]=True
    rec(x+a,a,b,p,n)
    rec(x+b,a,b,p,n)

def check(n,a,b):
    p=[False]*(n+1)
    rec(0,a,b,p,n)
    return p[n]

if __name__ == "__main__":
    a=2020
    b=2021
    t=int(input("Enter no. of test cases:"))
    for i in range(t):
        n=int(input("Enter number:"))
        if check(n,a,b):
            print("Yes")
        else:
            print("No")
