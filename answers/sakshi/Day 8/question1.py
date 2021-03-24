#day 8
#question 1
print("Enter the no")
l=[]
for i in range(0,l,1):
    e=int(input())
    l.append(e)
l2=[]
for i in l:
    l2.append(int(i))
sums=0
for i in range(0,len(l2)):
    x=0
    for j in range(0,len(l2)):
        if l2[i]==l2[j]:
            x+=1
    if x<2:
        sums=sums+l2[i]
print(sums)
