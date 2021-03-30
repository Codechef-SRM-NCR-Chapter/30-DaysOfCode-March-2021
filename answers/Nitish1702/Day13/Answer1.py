a=0
def res(i):
    global a
    if i<len(s):
        a+=int(s[i])
        i+=1
        res(i)
s=input()
res(0)
print(a)
