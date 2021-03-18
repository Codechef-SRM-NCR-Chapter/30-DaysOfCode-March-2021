s=input("Enter no. to be checked : ")
n=int(s)
sum=0
x=1
for i in s:
    h=""+i
    sum=sum+(int(h)**x)
    x+=1
if n==sum:
    print(s,"is a disarium number")
else:
    print(s,"is not a disarium number")
    
