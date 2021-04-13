info=input().split()
a= input().split()
l = int(info[0])
count=0
while count<int(info[1]):
    t = a[0]
    for i in range(l):
        if i == 0:
            a[i] = a[l - 1]
        else:
            c = a[i]
            a[i] = t
            t = c
    count+=1
q=[]
for i in range(int(info[2])):
    q.append(int(input()))

for i in q:
    print(a[i])



