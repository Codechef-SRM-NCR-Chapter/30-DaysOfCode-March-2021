N,i=int(input("Enter Size: ")),1
o,c=[int(x) for x in input('Enter NUMS seprated by space: ').split()][:N],[]
while(i<=N):
    if i in o:
        if o.count(i)>1:
            if c[0]!=i:
                c.insert(0,i)
    else:
         c.insert(1,i)
    i+=1
print('Output:',c)
            
