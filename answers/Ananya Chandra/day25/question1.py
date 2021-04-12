T= int(input("Enter the number of test cases \n"))
print("Enter the number of moves")
for m in range(T):
    m=int(input())#stores number of moves
    def move(x):
        if abs(x) <m:
            if x<0:
                return abs(x) + move(x - 1)
            elif x>0:
                return abs(x) + move(x + 1)
            else:
                return abs(x) + move(x - 1)+ move(x+1)
        else:
            return abs(x)

    print(move(0))
    
