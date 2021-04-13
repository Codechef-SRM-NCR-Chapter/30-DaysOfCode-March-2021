print("Input: ",end="")
t = int(input("Test cases:"))
print("\r")

res = []

def prime(n,i):
    if i<n:
        if n%i==0 :
            return 1+prime(n,i+1)
        else:
            return prime(n,i+1)
    else:
        return 0

for i in range(t):
    r = input("Range: ").split()  #r is range
    r[0] = int(r[0])
    r[1] = int(r[1])
    
    Prime = 0
    composite = 0
    
    for j in range(r[0],r[1]+1):
        if prime(j,1) == 1:
            Prime+=1
        else:
            composite+=1
    res.append(Prime * composite)

print("\nOutput:")

for i in range(len(res)):
    print(res[i])
