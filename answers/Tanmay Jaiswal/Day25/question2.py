print("Input:",end=" ")
t = int(input("Test cases: "))

for i in range(t):
    p = (input("\nEnter x y value: ").split())
    
    p[0] = int(p[0])
    p[1] = int(p[1])
    
    x = 0
    y = 0
    count = 0
    
    while x!=p[0] or y!=p[1]:
        
        if x<p[0] and y<p[1]:
            x+=1
            y+=1
            count+=1
        elif x<p[0]:
            x+=1
            count+=1
        else:
            print("Can't reach destination")
            break
            
    if x == p[0] and y == p[1]:
        print("Output:",count)
