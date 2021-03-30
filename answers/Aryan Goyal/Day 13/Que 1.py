def recsum(n1):
    if(n1<=0):
        return(0)
    else:
        y=n1%10
        x=n1//10
        return((y)+recsum(x))
num = int(input())
print(recsum(num))
