n = int(input())

res = [int(x) for x in str(n)]

length = len(res)
sum = 0
for i in range(0,length):
    sum = sum + (pow(res[i],i+1))

if(n == sum):
    print(n,"is a disarium")
else:
    print(n,"is not a disarium")
