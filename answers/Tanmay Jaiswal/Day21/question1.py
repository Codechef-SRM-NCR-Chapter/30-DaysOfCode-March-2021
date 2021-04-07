import string

print("Input:")

def create(): 
    stack=[] 
    return stack
    
def length(stack): 
    return len(stack) 
    
def isEmpty(stack): 
    if length(stack) == 0: 
        return true 
    
def push(stack,element): 
    stack.append(element) 
    
def pop(stack): 
    if isEmpty(stack): return
    return stack.pop() 
    
def rev_str(input): 
    x = len(input) 
        
    stack = create() 
    
    for i in range(0,x,1): 
        push(stack,input[i]) 
     
    input="" 
    
    for i in range(0,x,1): 
        input+=pop(stack) 
            
    return input
   
n = input("S = ")
print ("\nOutput: ")
print("S = ",end="")
print (rev_str(n))
