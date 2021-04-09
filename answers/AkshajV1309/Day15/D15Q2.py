def NOP(m,n):
    if m==1 or n==1:
        return 1
    return(fact(m+n-2)/(fact(m-1)*fact(n-1)))
def fact(n):
    if n==1:
        return 1
    return n*fact(n-1)
m=int(input("Enter no. rows: "))
n=int(input("Enter no. columns: "))
print("No. of Paths:",int(NOP(m,n)))
