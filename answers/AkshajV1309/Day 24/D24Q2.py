E,c=[int(x) for x in input('Enter Number ').split()],0
while E!=[0]*len(E):
    if all([x%2==0 for x in E]):
        E=[x//2 for x in E]
        c+=1
    for i in range(len(E)):
        if E[i]%2!=0:
           E[i]-=1
           c+=1
print('Output:',c)
