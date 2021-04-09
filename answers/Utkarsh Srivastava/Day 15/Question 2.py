def paths(m, n):
    if M == m or N == n:
        return 1
    else:
        return paths(m+1, n) + paths(m, n+1)
M = int(input())
N = int(input())
print(paths(1,1))
