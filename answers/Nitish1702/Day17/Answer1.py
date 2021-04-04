N,K=int(input('N=')),int(input('K='))
l=list(map(int,input('A[]=').strip('{} ').split(',')))
s=set()
def quad(l,K):
    l.sort()
    for i in range(N-3):
        for j in range(i+1,N-2):
            k=K-(l[i]+l[j])
            low=j+1
            high=N-1
            while low<high:
                if l[low]+l[high]<k:
                    low+=1
                elif l[low]+l[high]>k:
                    high-=1
                else:
                    s.add("".join([str(l[i]),str(l[j]),str(l[low]),str(l[high])])+'$')
                    low,high=low+1,high-1
quad(l,K)
print(s)
