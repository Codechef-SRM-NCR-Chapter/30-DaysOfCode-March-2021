n= int(input("Enter number of terms:"))
m=0
i=1
for i in range(1,n+1):
    for j in range(1,i+1):
        print(j,end="")
    print(" + ",end="")
