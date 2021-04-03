N,K,o=int(input('Enter Size: ')),int(input('Enter Sum: ')),[]
for i in range(N):
    o.append(int(input('Enter Element: ')))
def QF(o,K):
    o.sort()
    for i in range(len(o)-3):
        for j in range(i+1,len(o)-2):
            k=K-(o[i]+o[j])
            low=j+1
            high=len(o)-1
            while low<high:
                if o[low]+o[high]<k:
                    low+=1
                elif o[low]+o[high]>k:
                    high-=1
                else:
                    print("".join([str(o[i]),str(o[j]),str(o[low]),str(o[high])])+'$',end='')
                    low,high=low+1,high-1
QF(o,K)
