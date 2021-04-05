N,X=int(input('Enter Array Size: ')),int(input('Enter Sum: '))
o,c=[int(x) for x in input('Enter NUMS seprated by space: ').split()][:N],0
for i in range(0,N-2):
    for j in range(i+1,N-1):
        for k in range(j+1,N):
            if (o[i]+o[j]+o[k]<X):
                c+=1
print('Output:',c)
