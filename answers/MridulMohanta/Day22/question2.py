from queue import Queue
def revque(k , Queue):
    if Queue.empty() == True or k > Queue.qsize():
        return
    if k <= 0:
        return
    stack = []
    for i in range(0 , k):
        stack.append(Queue.queue[0])
        Queue.get()
    while (len(stack) != 0):
        Queue.put(stack[-1])
        stack.pop()
    for i in range(Queue.qsize() - k):
        Queue.put(Queue.queue[0])
        Queue.get()

inp = int(input("Enter N: "))
k = int(input("Enter K: "))
Queue = Queue()

for i in range(0 , inp):
    n = int(input("Enter Numbers: "))
    Queue.put(n)

revque(k , Queue)
def printq(Queue):
    while (not Queue.empty()):
        print(Queue.queue[0] , end = " ")
        Queue.get()
printq(Queue)
