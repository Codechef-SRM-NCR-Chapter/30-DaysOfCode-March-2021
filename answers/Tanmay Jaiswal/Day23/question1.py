print("Input: ",end="")
str = input()

def rev(str):
    str = str.split(" ")
    stack = []
    
    for i in str:
        stack.append(i)
        
    while len(stack) > 0:
        print(stack[-1], end = " ")
        del stack[-1]

print("Output: ",end="")
rev(str)
