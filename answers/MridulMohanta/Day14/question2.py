def recsum(l1 , l2, i = 0):
    if i < min(len(l1) , len(l2)):
        return [l1[i] + l2[i]] + recsum(l1 ,l2, i+1)
    else:
        return []

x = input("Enter first list: ")
y = input("Enter second list: ")
m = x.split()
n = y.split()
m = [int(i) for i in m]
n = [int(i) for i in n]
a = len(m)
b = len(n)

while a<b:
    m.append(0)
    break
while b<a:
    n.append(0)
    break

print(recsum(m , n))
