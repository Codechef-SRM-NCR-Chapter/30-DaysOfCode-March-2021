n = int(input())
count_digits = len(str(n)) 
       
    
sum = 0
x=n
while (x!=0) : 
  
    r = x % 10
           
    sum = sum + int(r**count_digits)
    count_digits = count_digits - 1
    x = int(x/10)
         
if sum == n : 
    print(n," IS A DISARIUM")
else: 
    print(n," IS NOT A DISARIUM")
