n=int(input(""))
m=list(map(int, input().split())) 
s=0
for i in range(n):
  sum1=0
  for j in range(i,n):
    sum1+=m[j]
    if sum1==0:
      s+=1
      
print(s)
