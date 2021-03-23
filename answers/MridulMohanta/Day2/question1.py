def isPrime( n ):  
    if n <= 1: 
        return False
    for i in range(2, n): 
        if n % i == 0: 
            return False
      
    return True
  
def isEmirp( n ): 
    
    n = int(n) 
    if isPrime(n) == False: 
        return False

    rev = 0
    while n != 0: 
        d = n % 10
        rev = rev * 10 + d 
        n = int(n / 10) 
    
    return isPrime(rev) 

n = int(input()) 
if isEmirp(n): 
    print(n,"is EMIRP number") 
else: 
    print(n,"is NOT an EMIRP number") 
