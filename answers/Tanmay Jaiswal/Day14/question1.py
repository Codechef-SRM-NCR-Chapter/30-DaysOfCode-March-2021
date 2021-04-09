str = "Input: "
print(str,end="")

s = input()

def dup(s):
    
    if len(s)==0 or len(s)==1:
        return s
    
    if s[0]==s[1]:
        return dup(s[1:])
    return s[0]+dup(s[1:])

print("Output: ",dup(s))   
