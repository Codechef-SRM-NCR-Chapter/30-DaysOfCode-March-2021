def fibbonaci():
    n=50
    assert n>0
    a=0
    b=1
    if n==1:
        print("Fibbonaci series upto ",n,"is",a)
    else:
        i=0
        print("Fibbonaci series upto ",n,":- 0",end=",")
        while i<n:
            c=a+b
            a=b
            b=c
            i+=1
            print(a,end=" , ")
if __name__=="__main__":
    fibbonaci()
