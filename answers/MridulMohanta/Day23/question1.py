inp = input("str = ")
stc = []
n = ""
s = []


for i in range(0 , len(inp)):
    if inp[i] == " ":
        stc.append(n)
        n = ""
    else:
        n = n + inp[i]

stc.append(n)

l = len(stc)

for i in range(0 , l):
    x = stc.pop()
    s.append(x)

print(" ".join(s))
    
