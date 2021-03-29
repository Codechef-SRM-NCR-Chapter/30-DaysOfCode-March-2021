def check(s,pos1,pos2):
    temp = ""
    for i in range(pos1-1,pos2):
        temp+=s[i]
    return temp == temp[::-1]

def change(s,pos):
    s[pos-1] = 'X'
    return s

n = int(input())
m = int(input())
s = list(input())

for i in range(0,m):
    operation = int(input())
    if(operation==1):
        pos = int(input())
        char = input()
        s = change(s,pos)
    else:
        pos1 = int(input())
        pos2 = int(input())
        if(check(s,pos1,pos2)):
            print("YES")
        else:
            print("NO")
        
