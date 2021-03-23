def fabo(n):
    if n<=1:
        return n
    else:
        return fabo(n-1)+fabo(n-2)
print("\t","*"*50)
print("\t\t      FIBONACCI")
print("\t","*"*50)
n1=int(input("\t\tEnter the value of n:"))
for i in range(0,n1):
    print("\t\t\t",fabo(i))
print("\t","*"*50)
