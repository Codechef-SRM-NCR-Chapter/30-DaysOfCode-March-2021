S=int(input('Enter the Size: '))
TSUM=int(input('Enter Target Sum: '))
a=[]
for i in range(S):
    a.append(int(input('Enter the array ElementS: ')))
def Quadruple(a,TSUM):
    a.sort()
    for i in range(S-3):
        for j in range(i+1,S-2):
            k=TSUM-(a[i]+a[j])
            l=j+1
            h=S-1
            while l<h:
                if a[l]+a[h]<k:
                    l+=1
                elif a[l]+a[h]>k:
                    h-=1
                else:
                    print("".join([str(a[i]),str(a[j]),str(a[l]),str(a[h])])+'$',end='')
                    l,h=l+1,h-1
Quadruple(a,TSUM)
