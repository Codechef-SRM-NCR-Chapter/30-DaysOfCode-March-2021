s=list(map(int,input().strip('[]').split(',')))
t=list(map(int,input().strip('[]').split(',')))
ls=len(s);lt=len(t)
a=[]
def func(i):
    global a
    if i<ls and i<lt:
        a.append(s[i]+t[i])
        i+=1
        func(i)
    else:
        if ls>lt and i<ls:
            a.append(s[i])
            func(i+1)
        elif lt>ls and i<lt:
            a.append(t[i])
            func(i+1)
func(0)
print(a)
