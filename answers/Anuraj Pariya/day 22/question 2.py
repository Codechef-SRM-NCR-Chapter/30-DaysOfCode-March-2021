def reverse_queue(queue,k):
    stack=[]
    queue2=queue[k:]
    i=0
    while(i<k):
        f=queue.pop(0)
        stack.append(f)
        i=i+1
    queue=[]
    i=0
    while(i<k):
        f=stack.pop(-1)
        queue.append(f)
        i=i+1
    queue=queue+queue2
    return queue
queue=list(map(int,input('enter queue ').split()))
k=int(input('enter position'))
print(reverse_queue(queue,k))
