import math

def calculatelength( n ):
    length = 0
    while n!=0:
        length = length + 1 
        n  =  n // 10 
    return length

m = int(input()) 
l = calculatelength(m)
rem = 0
sum = 0
num = m 

while m > 0:
    rem = m % 10
    sum = int(sum + math.pow(rem,l))
    m = m // 10 
    l = l -1  

if sum == num:
    print(num, "is a DISARIUM number")
else:
    print(num, "is not a DISARIUM number")
