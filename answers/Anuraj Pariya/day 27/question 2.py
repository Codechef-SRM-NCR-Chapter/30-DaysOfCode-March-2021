n = input('A string to repeat')
numbers = int(input('enter number of ch to be consider'))
count = 0
for i in range(len(n)):
    if(n[i]=='a'):
        count+=1
ans = (count) * (numbers//len(n))
print(ans)
