from collections import deque
T,F=int(input('Enter Test Cases: ')),[]
while(T>0):
    N=int(input('Enter N: '))
    if N in [0,1,2]:
        F.append(N)
        T-=1
        continue
    Q=deque()
    Q.extend(['1','2'])
    C=2
    while(C<N):
        Q.append(Q[0]+'1')
        C+=1
        if(C==N):
            break
        else:
            Q.append(Q[0]+'2')
            Q.popleft()
            C+=1
    F.append(Q[-1])
    T-=1
for C in F:
 print('Output:',C)
