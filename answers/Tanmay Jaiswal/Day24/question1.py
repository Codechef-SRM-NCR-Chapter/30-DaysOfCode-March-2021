print("Input:")
string = input()

n = len(string)
a = list(string)
def toString(List):
    return ''.join(List)

def permute(a, l, r):
    if l==r:
        print(toString(a))
    else:
        for i in range(l,r+1):
            a[l], a[i] = a[i], a[l]
            permute(a, l+1, r)
            a[l], a[i] = a[i], a[l]
            
print("\nOutput: ")
permute(c, 0, n-1,a)
