T,R=int(input('Enter No. Test Cases: ')),[]
while(T>0):
    N=int(input('Enter Number: '))
    if N<2020 or N//2020<N%2020:
        R.append('No')
    else:
        R.append('Yes')
    T-=1
for T in R:
    print(T)
    
