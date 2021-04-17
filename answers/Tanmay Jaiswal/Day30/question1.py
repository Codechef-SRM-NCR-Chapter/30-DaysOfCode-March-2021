import sys

print("Input:",end="")
n,m = list(map(int,input("\t").split()))

a = []
b = []

for i in range(m):
    a.append(input("\t").split())
    if (len(a[i][0])) <= (len(a[i][1])):
        b.append(0)
    else:
        b.append(1)
        
x = input("\t").split()

if len(x) != n:
    print("This line should contain str(n) words, try again.")
    sys.exit()
    
print("\nOutput:\t",end="")

for i in x:
    for j in range(m):
        if i in a[j]:
            print(a[j][b[j]],end=" ")
