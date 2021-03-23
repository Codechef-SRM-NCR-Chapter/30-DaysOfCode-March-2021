from math import sqrt
n= int(input())
l=[]        
def pfactor(n):
    while n%2==0:
        l.append(2)
        n/=2
    for i in range(3,int(sqrt(n))+1,2):
        while n%i==0:
            l.append(i)
            n/=i
    if n>2:
        l.append(n)
    print(str(l).lstrip("[").rstrip("]"))
pfactor(n)
    
