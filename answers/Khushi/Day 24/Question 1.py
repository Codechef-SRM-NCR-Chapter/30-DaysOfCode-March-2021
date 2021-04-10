def toString(list):
    return ''.join(list)

def permute(a,l,r):
    if(l==r):
        print(toString(a))
    else:
        for i in range(l,r+1):
            a[l],a[i]=a[i],a[l]
            permute(a,l+1,r)
            a[l],a[i]=a[i],a[l]

def fact(k):
    if(k==0 or k==1):
        return 1
    else:
        return k*fact(k-1)

s=input("Enter string:")
n=len(s)
a=list(s)
print("OUTPUT:")
print(fact(n))
permute(a,0,n-1)
