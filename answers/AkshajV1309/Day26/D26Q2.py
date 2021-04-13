N=int(input('Enter Size: '))
C,k=[int(x) for x in input('Enter Array: ').split()][:N],0
for i in range(1,len(C)):
    if C[i-1]>C[i]:
        k+=C[i-1]-C[i]
        C[i]+=(C[i-1]-C[i])
print('Output:',k)
