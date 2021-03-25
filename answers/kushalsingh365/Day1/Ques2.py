n = int(input())
for i in range (1,n+1):
    j = 0
    while j < n-i:
        print(" ",end=" ")
        j+=1
    
    k = 0
    while k < i:
        print("*",end=" ")
        k+=1
    print("\n")
    
