inp = input("Enter length of array , no. of rotatitons and no. of queries: ")
a,b,c = inp.split()
a = int(a)
b = int(b)
c = int(c)
l = [] 

n = input("Enter array: ")
m = n.split()
m = [int(i) for i in m]

for i in range(0 , c):
    q = int(input("Enter queries: "))
    l.append(q)

def rotatitons():
    temp = m[a - 1]
    for i in range(0 , a - 1):
        m[a -1 - i] = m[a - 2 - i]
    m[0] = temp

for i in range(0 , b):
    rotatitons()

for i in range(0 , c):
    print(m[l[i]])
