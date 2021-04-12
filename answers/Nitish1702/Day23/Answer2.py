def find(n):
    l = [''] * (n + 1)
    size = 1
    m = 1
    while (size <= n):
        i = 0
        while(i < m and (size + i) <= n):
            l[size + i] = "1" + l[size - m + i]
            i += 1
        i = 0
        while(i < m and (size + m + i) <= n):
            l[size + m + i] = "2" + l[size - m + i]
            i += 1
        m = m << 1 
        size = size + m
    print(l[n])
for _ in range(int(input())):
    find(int(input()))
