#sum of no using recursion
def Sum(n):
    if(n>0):
        x=int(n%10)
        n=int(n/10)
        return  x+Sum(n)
    else:
        return 0

print("Enter the No")    
n=int(input()) #no of elements input
print("Sum is: ",Sum(n))
