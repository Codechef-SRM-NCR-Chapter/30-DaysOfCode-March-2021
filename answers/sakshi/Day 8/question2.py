#day 8
#question2
print("Enter the no")
n=int(input())
l[]
print("Enter the no of elements")
l=int(input())
for i in range(0,n,1):
    e=int(input())
    l.append(e)
l2=[]
for i in l:
    l.append(int(i))
l2.sort()
sums=0
for i in range(0,len(n),2):
    sums=sums+l2[i]
print(sums)
