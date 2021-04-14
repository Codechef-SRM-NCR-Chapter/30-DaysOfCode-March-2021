N,R=int(input('Enter No. Test-Cases: ')),[]
while(N>0):
    I=[int(x) for x in input('Enter Length,Req. no. peaks: ').split()]
    if I[1]<I[0]/2:
        O,c=[str(x) for x in range(1,I[0]+1)],0
        if I[1]==0:
            R.append("".join(O))
        else:
            for i in range(I[0]-1,1,-2):
                O[i],O[i-1]=O[i-1],O[i]
                c+=1
                if c==I[1]:
                    break
            R.append("".join(O))  
    else:
        R.append(-1)
    N-=1
for i in R:
    print('Output:',i)
