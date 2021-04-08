def binaryString():
    x=[]
    for i in range(n-1,-1,-1):
        if(x==[]):
            x.append(s[i])
        else:
            a=x.pop()
            if(s[i]!=a):
                x.append(a)
                x.append(s[i])
    if(len(x)==0):
        print(-1)
    else:
        for i in range(len(x)):
            print(x.pop(), end="")

s=input("Enter the binary string: ")
n=len(s)
print("OUTPUT:",end="")
binaryString()