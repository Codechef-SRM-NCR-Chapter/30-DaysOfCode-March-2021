from collections import deque
n=input()
t=int(input())
a=[]
for _ in range(t):
    a.append(input())
for i in a:
    print(n.count(i))
