n=input("Enter no. to be checked : ")
q=0
for i in n:
    if n.count(i)>1:
        q=1
        break
if(q==0):
    print(n,"is a unique number")
else:
    print(n,"is not a unique number")
