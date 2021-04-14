import math
N=int(input('Enter Size: '))
O=[int(x) for x in range(1,N+1)]
print('Output:')
if sum(O)%2!=0:
    print('No')
else:
    print('Yes')
    t=N//2
    s=math.ceil(t/2)
    A=O[:t-s]+O[-s:]
    print(len(A))
    print(A)
    print(N-len(A))
    print(O[t-s:-s])
