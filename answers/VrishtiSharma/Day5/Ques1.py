def fibonacci(n):
    a = 0
    b = 1
    z = 1
    print("The fibonacci series upto", n, "terms is: ")
    while(z<=n):
        print(a, end = " ")
        c = a + b
        a = b
        b = c
        z+=1
fibonacci(50)
