o=[int(x) for x in input('Enter NUMS seprated by space: ').split()]
n,d=[],[]
for i in range(len(o)):
    c=list(bin(o[i])).count('1')
    d=[o[i],c]    
    n.append(d)
    n.sort(key=lambda d: -(d[1]))
n=[d[0] for d in n]
print(n)
