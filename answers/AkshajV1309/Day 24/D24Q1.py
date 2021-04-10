from itertools import permutations as pmt
S=input('Enter string: ')
p=sorted(''.join(c) for c in pmt(S))
print(len(p))
for c in p:
    print(c)
 
