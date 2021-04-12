def isprime(i):
    for j in range(2,i):
        if(i%j==0):
            return 0
    return 1
T,F=int(input('Enter Test cases: ')),[]
while(T>0):
    I,P,C=[int(x) for x in input('Enter lower and upper limit: ').split()],[],[]
    for i in range(I[0],I[1]+1):
        P.append(i) if isprime(i)==1 else C.append(i)
    F.append(len(P)*len(C))
    T-=1
for i in F:
    print('Output:',i)
