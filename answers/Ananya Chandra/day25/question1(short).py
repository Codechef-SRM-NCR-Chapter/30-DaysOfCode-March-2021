T= int(input("Enter the number of test cases \n"))
print("Enter the number of moves")
for m in range(T):
    m=int(input())#stores number of moves
    s=0
    for i in range(m+1):
        s=s+2*i
    print(s)
