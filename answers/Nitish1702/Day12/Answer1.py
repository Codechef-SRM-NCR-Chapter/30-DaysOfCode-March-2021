l=list(map(int,input().strip().split(' ')))
s=list(input())
op=[]
for _ in range(l[1]):
    n=input().split(' ')
    if n[0]=='1':
        s[int(n[1])-1]=n[2]
    elif n[0]=='2':
        sub=s[int(n[1])-1:int(n[2])]
        if sub==list(reversed(sub)):
            print('YES')
        else:
            print('NO')
