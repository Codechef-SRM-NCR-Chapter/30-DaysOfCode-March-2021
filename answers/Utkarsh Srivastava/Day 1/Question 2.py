n = int(input())
for i in range(n):
    for j in range(n):
        if( j < n-i-1):
            print("  ",end="")
        else:
            print("* ",end="")
    print()
