print("Enter value of n")
n=int(input())
for i in range(1,n+1):
    if i==n:
        print((i**3)+(i*2),end="")
    else:
        print((i**3)+(i*2),",",end="")
