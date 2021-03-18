def no_is_Prime( n ): 
    if n <= 1: 
        return False 
    for i in range(2, n): 
        if n % i == 0: 
            return False
      
    return True
def no_is_Emirp( n): 
    n = int(n) 
    if no_is_Prime(n) == False: 
        return False 
    rev = 0
    while n != 0: 
        d = n % 10
        rev = rev * 10 + d 
        n = int(n / 10) 
    return no_is_Prime(rev)  
n = int(input('enter no.')) 
if no_is_Emirp(n): 
    print("Yes") 
else: 
    print("No") 
