import numpy

print("Input: ",end="")

a = numpy.array(input("A: ").split()).astype(int)
b = numpy.array(input("B: ").split()).astype(int)

sum = []

def add(a, b):
    
    temp = 0
    
    if(a.size != 0):
        temp += a[0]
        
    if(b.size != 0):
        temp += b[0]
        
    if(a.size == 0 and b.size == 0):
        return sum    
    sum.append(temp)
    
    return add(a[1:],b[1:])

print("Output: ",add(a, b))
