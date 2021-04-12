inp = int(input("Enter number of test cases: "))
n = []
for i in range(0 , inp):
    m = int(input("Enter number of steps: ")) 
    n.append(m)
sm = 0
step = 0

def smcount(x , count):
    global sm
    if count == step:
        sm += abs(x)
        return
    smcount(x + 1 , count + 1)
    smcount(x - 1 , count + 1)
    smcount(x , count + 1)

for i in n:
    sm = 0
    step = i
    smcount(0 , 0)
    print(sm)
    
