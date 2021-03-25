a=[]
n=int(input("Enter no. of elements: "))
print("Enter array:")
for x in range(n):
    element=int(input())
    a.append(element)
a.sort()
b=[]
for i in range(0,len(a)-1):
    if a[i]==a[i+1]:
        b.append(a[i])
b=list(set(b))
a=set(a)
while(len(b)>0):
    a.remove(b[0])
    b.pop(0)
print("Output:",end=" ")
print(sum(a))