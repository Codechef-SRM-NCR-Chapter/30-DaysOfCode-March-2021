T=int(input('Enter Test cases: '))
while(T>0):
    N=[int(x) for x in input('Enter X & Y: ').split()]
    print("Can't reach destination")if N[1]>N[0]or 0>N[0]or 0>N[1] else print('Output:',N[0])
    T-=1
