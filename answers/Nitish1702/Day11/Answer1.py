from collections import Counter
import re
n=input()
c=Counter(n)
def eve():
    x=0
    if len(n)%2==0:
        for i in c:
            if c[i]%2==0:
                x+=1
            else:
                break
        return x
def odd():
    count=0
    if len(n)%2!=0:
        for i in c:
            if c[i]%2!=0:
                count+=1
            else:
                continue
        return count
if len(n)%2==0:
    if eve()==len(c):
        print('YES')
    else:
        print('NO')
else:
    print(odd())
    if odd()!=1:
        print('NO')
    else:
        print('YES')
