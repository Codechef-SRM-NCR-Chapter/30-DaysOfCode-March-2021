from queue import Queue
from collections import deque

print("Input: ",end="")
t = int(input())
Queue = []

while(t>0):
    n = int(input())
    if n in [1,2]:
        Queue.append(n)
        t-=1
        continue
        
    q = deque()
    q.extend(['1','2'])
    x = 2
    
    while(x<n):
        q.append(q[0]+'1')
        x+=1
        if(x==n):
            break
        else:
            q.append(q[0]+'2')
            q.popleft()
            x+=1
    Queue.append(q[-1])
    t-=1

print("\nOutput: ",end="")
for x in Queue:
    print(x)
