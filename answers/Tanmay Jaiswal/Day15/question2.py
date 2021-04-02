print("Input: ",end="")

m=int(input("M = "))
n=int(input("N = "))

def matrix(i,j):
    
    if i == 1 or j == 1:
        return 1
    else:
        return matrix(i-1,j) + matrix(i,j-1)
    
print("Output:",matrix(m,n))
