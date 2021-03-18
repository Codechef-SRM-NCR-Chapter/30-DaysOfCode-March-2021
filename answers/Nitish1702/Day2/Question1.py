def rev(n):
	rev=0
	while (n > 0):   
	    remainder = n % 10  
	    rev = (rev * 10) + remainder  
	    n = n // 10
	
	return rev

def emirp(n):
        if n<=1:
            return False
        else:
            for i in range(2,rev(n)):
                if n%i==0 or rev(n)%i==0:
                    print( n,"IS NOT AN EMIRP NUMBER")
                    break
                else:
                    print( n,"IS AN EMIRP NUMBER")
                    break
    

n= int(input())
emirp(n)
