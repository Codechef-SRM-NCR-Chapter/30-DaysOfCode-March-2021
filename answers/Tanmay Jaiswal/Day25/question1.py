print("Input:",end=" ")
t = int(input("Test cases: "))

for n in range(t):
    n = int(input("\nNumber of moves: "))
    
    def moves(m):
        
        if abs(m)<n:
            
            if m<0:
                return abs(m) + moves(m - 1)
            elif m>0:
                return abs(m) + moves(m + 1)
            else:
                return abs(m) + moves(m - 1)+ moves(m + 1)
            
        else:
            return abs(m)
        
    print("Output:",moves(0))
