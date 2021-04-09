def goodNumber(n):
    q=[]
    q.append('1')
    q.append('2')
    for i in range(n):
        c=q.pop(0)
        q.append(c+'1')
        q.append(c+'2')
    return c

t=int(input("Enter no. of test cases:"))
for x in range(t):
    n=int(input("Enter the value of n:"))
    print("OUTPUT: ",end="")
    print(goodNumber(n))