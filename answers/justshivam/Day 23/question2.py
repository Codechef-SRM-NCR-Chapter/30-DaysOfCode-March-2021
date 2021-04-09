from collections import deque


def find(num):
    if(num == 1):
        return 1
    elif(num == 2):
        return 2
    que = deque()
    que.append('1')
    que.append('2')
    count = 2
    while(count < num):
        que.append(que[0] + '1')
        count += 1
        if(count == num):
            break
        else:
            que.append(que[0] + '2')
            que.popleft()
            count += 1
    return que[-1]


res = []
for i in range(int(input())):
    res.append(find(int(input())))
for i in res:
    print(i)
