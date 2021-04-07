t = int(input())
while t>0:
    n = input()
    stack = []
    for i in range(len(n)):
        if(len(stack)==0) or n[i]!=stack[-1]:
            stack.append(n[i])
        else:
            stack.pop()
    if(len(stack)==0):
        print("Empty")
    else:
        print(stack)
    t-=1
