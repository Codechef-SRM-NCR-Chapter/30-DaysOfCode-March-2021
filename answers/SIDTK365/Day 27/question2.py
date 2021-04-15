s = input()
size = int(input())
count = 0
for i in range(len(s)):
    if(s[i]=='a'):
        count+=1
ans = (count) * (size//len(s))
print(ans)
