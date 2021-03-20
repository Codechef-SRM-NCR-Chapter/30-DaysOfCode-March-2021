def isprime(int x):
    c=0
    for i in range(1,n+1,1):
        if n%i==0:
            c+=1
    if c==2:
        return 1
    else:
        return 0



def main():
    n=int(input())
    l=[]
    for i in range(2,n+1,1):
         if isprime(i)==1 and n%i==0):
             l[
        
