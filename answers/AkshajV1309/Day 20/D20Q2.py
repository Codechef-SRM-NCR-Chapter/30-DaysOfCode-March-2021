X,r,S=input('Enter Expression: '),'True',[]
for i in X:
    if i in ["(", "{", "["]:
        S.append(i)
    else:
        c=S.pop()
        if c=='('and i!=")"or c=='{'and i!="}"or c=='['and i!="]":
            r='False'
            break
print('Output:',r)
