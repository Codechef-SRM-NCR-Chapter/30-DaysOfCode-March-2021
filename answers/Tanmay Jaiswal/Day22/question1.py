print("Input: ",end="")
string = input()

def stack(s):
    if (len(s) == 0):
        return
    
    x = s[-1]

    s.pop()

    stack(s)

    print(x, end="")

    s.append(x)

def min(s):

    Stack = []

    Stack.append(s[0])

    for i in range(1, len(s)):
        if (len(Stack) == 0):
            Stack.append(s[i])
        else:
            if (Stack[-1] == s[i]):
                Stack.pop()
            else:
                Stack.append(s[i])

    stack(Stack)
    
print("Output: ",end="")
min(string)
