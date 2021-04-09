def createStack():
    stack=[]
    return stack
def isEmpty(stack):
    if sizeStack(stack)==0:
        return true
def sizeStack(stack):
    return len(stack)
def push(stack,val):
    stack.append(val)
def pop(stack):
    if isEmpty(stack):
        return
    return stack.pop()

def reverse(s):
    n=len(s)
    stack=createStack()
    for i in range(0,n,1):
        push(stack,s[i])
    s=""
    for i in range(0,n,1):
        s+=pop(stack)
    return s

s=input("Enter string: ")
s=reverse(s)
print("OUTPUT:",s)