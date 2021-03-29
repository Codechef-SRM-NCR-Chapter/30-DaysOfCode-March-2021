import string

let,op = input().split()
op = int(op)
txt = input("")
ans={}
num=0

def letterreplace(m , y):
    global txt
    y = str(y)
    txt=txt[:m-1]+y+txt[m:]
    

def palcheck(n , z):
    flag = 0 
    sub = txt[n-1 : z]
    global num
    for i in range(0 , len(sub)):
        if sub[i] != sub[len(sub) - i - 1]:
            flag = 1
            break
    if flag == 1:
        ans[num]="NO"
        num=num+1
    else:
        ans[num]="YES"
        num=num+1
    

for j in range(0 , op):
    c,a,b=input().split()
    c = int(c)
    a = int(a)
   
    if c == 1:
        letterreplace(a , b)
    else:
        b = int(b)
        palcheck(a , b)
for k in ans.values():
    print(k)
