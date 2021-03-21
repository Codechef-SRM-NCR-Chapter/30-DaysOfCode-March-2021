def fibonacci(n):
    f1 = 0
    f2 = 1
    if(n < 1):
        return
    print(f1, end=" ")

    for i in range(1, n):
        print(f2, end=" ")
        temp = f2+f1
        f1 = f2
        f2 = temp


# n = int(input()) 
# fibonacci(n)  For our custom input

fibonacci(50)
