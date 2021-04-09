def countPaths(m,n):
    if(m==1 or n==1):
        return 1
    return countPaths(m-1,n)+countPaths(m,n-1)

m=int(input("Enter m: "))
n=int(input("Enter n: "))
print("OUTPUT: ",end="")
print(countPaths(m,n))