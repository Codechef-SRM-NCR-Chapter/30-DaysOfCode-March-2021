def twostring(List):
    return "".join(List)

def perm(x , y , z , b):
    a = 0
    if y == z:
        print(twostring(x))
        b.append(twostring(x))
    for i in range(y , z + 1):
        x[y] , x[i] = x[i] , x[y]
        perm(x , y + 1 , z , b)
        x[y] , x[i] = x[i] , x[y]   

n = input("Enter Letters: ")
x = list(n)
b = []

perm(x , 0 , len(n) - 1 , b)
print(len(b))
