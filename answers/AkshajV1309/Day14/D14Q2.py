def addarr(A,B,i=0):
    if i<len(A):
        return [A[i]+B[i]]+addarr(A,B,i+1)
    return[]
A=[int(x) for x in input('Enter elements for A: ').split()]
B=[int(x) for x in input('Enter elements for B: ').split()]
l=len(A)-len(B)
if l>0:
    B+=[0]*l
else:
    A+=[0]*abs(l)
print("Output: ",addarr(A,B))
