inp = input("Enter Sentence: ")
n = []
k = []
for i in range(0 , len(inp)):
    n.append(inp[i])

for i in range(0 , len(n)):
    d = n.pop()
    k.append(d)
print("".join(k))
