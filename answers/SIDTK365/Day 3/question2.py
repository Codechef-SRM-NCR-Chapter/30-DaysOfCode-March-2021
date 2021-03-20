n = int(input())

res = [int(x) for x in str(n)]

length = len(res)
num_freq = {}

flag = True
for i in range(0,length):
    if res[i] not in num_freq:
        num_freq.update({res[i]:1})
    else:
        flag = False
        break

if(flag == True):
    print(n,"is a unique number")
else:
    print(n,"is not a unique number")
