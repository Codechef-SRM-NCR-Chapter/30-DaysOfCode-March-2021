def numberOfPaths(m, n):
    if(m == 1 or n == 1):
        return 1
 
    return numberOfPaths(m-1, n) + numberOfPaths(m, n-1)
 
m = int(input('enter number'))
n = int(input('enter no.'))
print(numberOfPaths(m, n))
