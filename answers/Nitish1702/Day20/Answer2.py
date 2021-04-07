l,res,a=input(),'True',[]
for i in l:
    if i in ["(", "{", "["]:
        a.append(i)
    else:
        c=a.pop()
        if c=='('and i!=")"or c=='{'and i!="}"or c=='['and i!="]" :
            res='False'
            break
print(res)
