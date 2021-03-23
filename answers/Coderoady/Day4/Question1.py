num=int(input("Enter the number : "))
def fac(x):
    factor=[]
    d=2
    while d<=x:
        if x%d==0:
            factor.append(d)
            x=x/d
        else:
            d+=1
    return factor
print("Prime factors of ",num,"are",end=" ")
print(fac(num))
