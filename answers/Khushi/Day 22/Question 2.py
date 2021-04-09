n=int(input("Enter the size of queue:"))
k=int(input("Enter the position from which queue is to be reversed:"))
a=[]
print("Enter the elements:")
for i in range(n):
    elem=int(input())
    a.append(elem)
i=0
while(i<k//2):
    x=a[i]
    a[i]=a[k-1-i]
    a[k-1-i]=x
    i+=1
print("OUTPUT:",a)