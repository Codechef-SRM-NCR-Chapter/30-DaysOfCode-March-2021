string = input().split()
stack = []
for str in string:
    stack.append(str)
while(len(stack)>0):
    print(stack[-1],end=' ')
    stack.pop()
