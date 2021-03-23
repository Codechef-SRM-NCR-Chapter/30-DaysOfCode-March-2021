def fn(n):
    if (n<2):
        return 1
    return (fn(n-1)+fn(n-2))
n=50
for i in range(n):
    print(fn(i))
