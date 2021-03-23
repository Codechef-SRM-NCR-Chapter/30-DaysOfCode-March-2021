num=int(input("Enter the number of rows : "))
n=1
for r in range(1,num+1):
    for c in range(1,r+1):
        print(n,end=" ")
        n=n+1
    print()
