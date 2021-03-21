def fibonacci(n):
    if(n<2):
        return 1
    return (fibonacci(n-1)+fibonacci(n-2))
n= 50
for i in range(n):
    print(fibonacci(i))
