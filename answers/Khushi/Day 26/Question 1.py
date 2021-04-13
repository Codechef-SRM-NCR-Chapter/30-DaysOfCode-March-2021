def countPrime():
    c=0
    for i in range(a,b+1):
        if(i>1):
            for j in range(2,i):
                if (i%j==0):
                 break
            else:
                c+=1
    return c

def countComposite():
    n=(b-a)+1
    x=countPrime()
    compo=n-x
    return compo

def sol():
    y = countPrime()
    z = countComposite()
    return y*z

t=int(input("Enter no. of test cases:"))
for m in range(t):
    print("Enter range:",end="")
    a,b=map(int,input().split())
    print("OUTPUT:",end="")
    print(sol())
