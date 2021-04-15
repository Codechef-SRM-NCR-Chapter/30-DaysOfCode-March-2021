def division(z):
    if(z<=2):
        print("NO")
        return
    va=(z*(z+1))//2
    if(va & 1):
        print("NO")
        return
    x=[]
    y=[]
    if(not(z & 1)):
        t=1
        entry=1
        exit=z
        while(entry<exit):
            if(t):
                x.append(entry)
                x.append(exit)
                t=0
            else:
                y.append(entry)
                y.append(exit)
                t=1
            entry+=1
            exit-=1
    else:
        r=va//2
        v=[False]*(z+1)
        for i in range(1,z+1):
            v[i]=False
        v[0]=True
        for i in range(z,0,-1):
            if(r>i):
                x.append(i)
                v[i]=True
                r-=i
            else:
                x.append(r)
                v[r]=True
                break
        for i in range(1,z+1):
            if(not v[i]):
               y.append(i)
    print("YES")
    print("Size of SET 1 is: ",end ="")
    print(len(x))
    print("Elements of the sets are: ",end = "")
    for c in x:
      print(c,end=" ")
    print("\nSize of SET 2 is: ",end="")
    print(len(y))
    print("Elements of the sets are: ",end="")
    for c in y:
       print(c,end=" ")
if __name__=="__main__":
    z=int(input("Value of z:"))
    division(z)
