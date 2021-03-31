print("Input: ",end="")
n = int(input())

def sum(n):
    
    if n==0:
        return 0
    
    else:
        return (n%10 + sum(int(n/10)))

print("Output:",sum(n))
