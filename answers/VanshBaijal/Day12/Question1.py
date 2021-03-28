N,M = map(int, input("INPUT: ").split())
S = input()
c = 0
r = []
for i in range(M):
    l = input().split()
    l[1] = int(l[1])-1
    if (l[0]=='1'):
        S = S[:l[1]]+l[2]+S[l[1]+1:]
    if (l[0]=='2'):
        temp = S[l[1]:int(l[2])]
        l[2] = int(l[2])-1
        for i in range(int(len(temp)/2)):
            if(temp[i]!=temp[len(temp)-i-1]):
                c = 1
        if(c==0):
            r.append('Yes')
        else:
            r.append('No')
    c = 0
for i in range(M):
    print("OUTPUT: ",r[i])
