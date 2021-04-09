string = input()
stack = []
for char in string:
    if(len(stack)==0):
        stack.append(char)
        continue
    if(stack[-1]==char):
        stack.pop()
    else:
        stack.append(char)
print(stack)
