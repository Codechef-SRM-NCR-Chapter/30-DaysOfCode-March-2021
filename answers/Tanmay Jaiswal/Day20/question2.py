print("Input: ",end="")
exp = input()
def exps(exp):
    
    stack = []
    
    for char in exp:
        if char in ["[", "(", "{"]:
            stack.append(char)
        
        else:
            if not stack:
                return False
            
            current_char = stack.pop()
            if current_char == '(':
                if char != ")":
                    return False
            if current_char == '{':
                if char != "}":
                    return False
            if current_char == '[':
                if char != "]":
                    return False
                
    if stack:
        return False
    return True

print("Output: ",end="")
if exps(exp):
        print(True)
else:
        print(False)
