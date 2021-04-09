from collections import deque

def helper(q,n,k):
    stack = []
    for i in range(1,k+1):
        stack.append(i)
    queue_ans = deque()
    while(len(stack) > 0):
        queue_ans.append(stack.pop())
    for i in range(k+1,n+1):
        queue_ans.append(i)
    
    for i in queue_ans:
        print(i,end='')

q = deque()
n = int(input())
k = int(input())
q = input()
# for i in range(1,n+1):
#     q.append(i)
helper(q,n,k)

# Test Case
6
2
1 2 3 4 5 6

# Ans
# 2 1 3 4 5 6
