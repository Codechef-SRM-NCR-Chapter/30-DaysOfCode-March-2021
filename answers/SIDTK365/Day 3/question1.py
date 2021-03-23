n = int(input())

ans = 0
for i in range(1,n+1):
    temp = 0
    for j in range(1,i+1):
        temp += (j*(pow(10,i-j)))
    ans+=temp
    
print(ans)
