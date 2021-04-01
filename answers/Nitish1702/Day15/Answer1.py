s=input().split(' ')
res=''
def rev(i):
    global res
    if i<=len(s):
        res+=s[-i]+' '
        rev(i+1)
rev(1)
print(res)
