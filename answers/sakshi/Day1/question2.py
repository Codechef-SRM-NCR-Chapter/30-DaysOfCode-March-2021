# Day Two Answer
print("Enter the value of n")
n=int(input())
for i in range(0,n+1,1):
    for  j in range(0,n,1):
        if j <n-i:
            print(" ",end="")
        else: 
            print("*",end="")
    print("\n")  
