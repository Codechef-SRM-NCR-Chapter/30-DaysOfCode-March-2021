t = int(input())
for i in range(0,t):
    size = int(input())
    s = input()
    count = 0
    for i in range(0,size):
        if(s[i]=='1'):
            count+=1
    ans = count+((count)*(count-1))//2
    print(ans)
