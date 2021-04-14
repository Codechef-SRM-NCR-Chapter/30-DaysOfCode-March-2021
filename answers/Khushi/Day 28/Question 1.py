def equalSum(n):
    if(n<=2):
        print("NO")
        return
    val=(n*(n+1))//2
    if(val & 1):
        print("NO")
        return
    a=[]
    b=[]
    if(not(n & 1)):
        t=1
        start=1
        last=n
        while(start<last):
            if(t):
                a.append(start)
                a.append(last)
                t=0
            else:
                b.append(start)
                b.append(last)
                t=1
            start+=1
            last-=1
    else:
        r=val//2
        v=[False]*(n+1)
        for i in range(1,n+1):
            v[i]=False
        v[0]=True
        for i in range(n,0,-1):
            if(r>i):
                a.append(i)
                v[i]=True
                r-=i
            else:
                a.append(r)
                v[r]=True
                break
        for i in range(1,n+1):
            if(not v[i]):
               b.append(i)
    print("YES")
    print("Size of subset 1 is: ",end ="")
    print(len(a))
    print("Elements of the subset are: ",end = "")
    for c in a:
      print(c,end=" ")
    print("\nSize of subset 2 is: ",end="")
    print(len(b))
    print("Elements of the subset are: ",end="")
    for c in b:
       print(c,end=" ")

if __name__=="__main__":
    n=int(input("Enter value of n:"))
    equalSum(n)
