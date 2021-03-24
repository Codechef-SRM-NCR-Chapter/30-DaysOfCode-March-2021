n=[int(x) for x in input("Enter the numbers with space: ").split()]
x=[ ]
s=0
for i in range(len(n)):
    for j in range(i+1,len(n)):
        x.append((n[i],n[j]))
for i in range(int(len(x))):
    a = min(x[i])+min(x[len(x)-i-1])
    if(a>s):
        s=a
print("OUTPUT: ",s)
