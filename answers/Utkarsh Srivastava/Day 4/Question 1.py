n = int(input())
c = 0
while(n%2==0):
    print(2,end=",")
    n/=2
n = int(n)
while(n!=1):
    for i in range(2,n+1):
        for j in range(2,i):
            if(i%j==0):
                c = 1
        if(c==0):
            if(n%i==0):
                print(i,end=",")
                n = int(n/i)
        c=0
