arr = input("Enter number: ")
n = arr.split()
n = [int(i) for i in n]
temp = 0
m = []
ogpos = 0
ogpos2 = 0

for i in range(0 , len(n)):
    m.append(0)

for i in range(0 , len(n)):
    m[i] = n[i]


def bitcount(x):
    if x == 0:
        return 0
    else:
        return (x & 1) + bitcount(x >> 1)   

for i in range(0 , len(n)):
    max = bitcount(n[i])
    pos = i
    for j in range(i+1 , len(n)):
        if max < bitcount(n[j]):
            max = bitcount(n[j])
            pos = j
        elif max == bitcount(n[j]):
            for k in range(0 , len(m)):
                if n[i] == m[k]:
                    ogpos = k
                if n[j] == m[k]:
                    ogpos2 = k
            if ogpos2 < ogpos:
                pos = j

    temp = n[i]
    n[i] = n[pos]
    n[pos] = temp

for i in range(0 , len(n)):
    print(n[i] , end = " ")    
