arr=[]
num=[]
index=[]
d=0
e=0

n=int(input("enter the number of elements"))
for o in range(n):


    d=0
    arr.append(d)

for i in range(n):
    m=int(input("enter the elements"))
    x=int(input("Enter the index"))
    num.append(m)
    index.append(x)
for j in range(n):
    d=num[j]
    e=index[j]
    arr[e]=d

for o in range(n):

    print(arr[o],",",end="")

