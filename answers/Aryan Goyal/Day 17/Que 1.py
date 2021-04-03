N=int(input(""))
K=int(input(""))
m=list(map(int, input().split())) 
s=p=0
for i in range(N):
  s+=m[i]
  p+=1
  if s==K and p==4:
    for j in range(p):
      print(m[i-j])
