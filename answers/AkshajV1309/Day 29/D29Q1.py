T,R=int(input('Enter no. Test Cases: ')),[]
while(T>0):
    P=[int(x) for x in input('Enter No. Cases,Sum: ').split()]
    A=sorted([int(x) for x in input('Enter Numbers: ').split()][:P[0]])
    B=sorted([int(x) for x in input('Enter Numbers: ').split()][:P[0]])
    for i in range(P[0]):
        if A[i]+B[-(i+1)]>P[1]:
            R.append('No')
            break
        elif i==P[0]-1:
            R.append('Yes')
    T-=1
for T in R:
    print(T)
