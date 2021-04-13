def sieveofEratothenes(n):
    prime = [True for i in range(n+1)]
    p = 2
    while(p*p<=n):
        if(prime[p]==True):
            for i in range(p*p,n+1,p):
                prime[i]=False
        p+=1

    count = 0
    for i in range(2,n+1):
        if(prime[i]==True):
            count+=1
    return count


t = int(input())
while t > 0:
    x,y = map(int,input().split())
    prime_count = (sieveofEratothenes(y)) - sieveofEratothenes(x) + 1
    composite_count = (y-x+1) - prime_count
    print(prime_count * composite_count)
    t-=1
