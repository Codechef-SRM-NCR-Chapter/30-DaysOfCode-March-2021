from collections import deque
t = int(input())
while t>0:
    n = int(input())
    if(n==1):
        print(1)
        continue
    elif(n==2):
        print(2)
        continue
    q = deque()
    q.append('1')
    q.append('2')
    count = 2
    while(count < n):
        q.append(q[0] + '1')
        count+=1
        if(count==n):
            break
        else:
            q.append(q[0] + '2')
            q.popleft()
            count+=1
    print(q[-1])
    t-=1
    
# Here we keep a track of the nth element that is appended in the deque as we generate the number that satisfies the condition of the given question 
# by using the 1st element that is present in the queue and we pop it as soon as we generate our given number and append the generated number it in the queue
# Our answer the the rightmost element present in the deque
