def sol(n):
    return n*(n+1)

def func():
    t=int(input("Enter no. of test cases: "))
    for k in range(t):
        moves=int(input("Enter no. of moves: "))
        print("OUTPUT:",end=" ")
        print(str(sol(moves)))

func()
