N,K=int(input('Enter Size: ')),int(input('Enter Reversing position'))
S=[int(x) for x in input('Enter Nums sperated by space: ').split()][:N]
S=S[:K][::-1]+S[K:]
print(S)
