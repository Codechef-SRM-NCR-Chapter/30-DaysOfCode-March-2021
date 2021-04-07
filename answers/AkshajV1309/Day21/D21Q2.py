N=int(input('Enter Size: '))
S=[int(x) for x in input('Enter Nums sperated by space: ').split()][:N]
S.sort()
a=b=''
for i in range(0,N,2):
    a+=str(S[i])
    if i+1<N:
        b+=str(S[i+1])
print('Output:',int(a)+int(b))
