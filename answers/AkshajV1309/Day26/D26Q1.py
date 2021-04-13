def isprime(i):
    for j in range(2,i):
        if(i%j==0):
            return 0
T,F=int(input('Enter Test cases: ')),[]
while(T>0):
    I,P,C=[int(x) for x in input('Enter lower and upper limits: ').split()],[],[]
    for i in range(I[0],I[1]+1):
        P.append(i) if isprime(i)!=0 else C.append(i)
    F.append(len(P)*len(C))
    T-=1
for i in F:
    print('Output:',i)
