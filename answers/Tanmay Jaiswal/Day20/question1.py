print("Input:")
t = int(input())
n = []
res = []

for i in range(t):
    n.append(input())
    
    l = len(n[i])
    res.append([])
    t = n[i][l-1]
    res[i].append(n[i][l-1])
    
    for j in range(l-2,-1,-1):
        if n[i][j] != t:
            res[i].append(n[i][j])
            t = n[i][j]
print("\nOutput:")
for i in res:
    while len(i)>0:
        print(i.pop(),end="")
    print()
