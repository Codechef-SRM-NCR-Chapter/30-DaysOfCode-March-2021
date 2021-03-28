n = int(input("INPUT: "))
c = [0]*n
for i in range(n):
    l = int(input())
    S = input()
    for j in range(l):
        if (S[j]=='0'):
            continue
        for k in range(j,l):
            if (S[k]=='1'):
                c[i] = c[i]+1
for i in range(n):
    output=c[i]
    print("OUTPUT: ",output)
