def checkFunction(s):
    num_char=256
    count=[0 for i in range(num_char)]
    for i in s:
        count[ord(i)]+=1
    odd=0
    for i in range(num_char):
        if(count[i] & 1):
            odd+=1
        if(odd>1):
            return False
    return True

if(checkFunction("aabbccdd")):
    print("YES")
else:
    print("NO")
if(checkFunction("cdefgtds")):
    print("YES")
else:
    print("NO")
