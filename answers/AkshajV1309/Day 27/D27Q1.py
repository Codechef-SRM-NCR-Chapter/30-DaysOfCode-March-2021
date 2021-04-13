P=[int(x) for x in input('Enter Length,Rotations,Queries: ').split()]
I,p=[int(x) for x in input('Enter Array: ').split()][:P[0]],[]
for i in range(P[1]):
    I.insert(0, I.pop())
for i in range(P[2]):
    p.append(I[int(input('Enter Query: '))])
for i in p:
    print(i)
