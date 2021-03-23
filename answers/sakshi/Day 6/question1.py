#Day 6
#question 1
n=int(input())
l=[]
for i in range(0,n,1):
    e=int(input())
    l.append(e)
maximum=max(l)
extraCandies=int(input())
l2=[]
for i in range(n):
    if(maximum-l[i]<=extraCandies):
        l2.append("True")
    else:
        l2.append("False")

print(l2)
        
