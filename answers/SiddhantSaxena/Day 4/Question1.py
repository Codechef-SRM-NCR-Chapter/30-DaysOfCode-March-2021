

n=int(input("Enter the number:"))
p=2
while n!=1:
  s=n%p
  if s==0:
    print(p,",",end="")
    n=n//p
  else:
    p=p+1
