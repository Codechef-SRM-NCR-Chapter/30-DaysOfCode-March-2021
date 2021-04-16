P,I=[int(x) for x in input('Enter no. words,Total no. words in L1&L2: ').split()],[]
for i in range(P[1]):
    I.append(input('Enter 2 strings: ').split())
s=input('Sentence of L1: ').split()
for i in I:
    if len(i[0])>len(i[1]):
        for j in range(P[0]):
            if s[j]==i[0]:
                s[j]=i[1]
print('Output:'," ".join(s))
