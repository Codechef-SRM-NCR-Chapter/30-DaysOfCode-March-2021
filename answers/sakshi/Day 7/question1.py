#Day 7
#Question1


def target(num,index):
    list=[];l=len(num)
    for i in range(l):
        list.insert(index[i],num[i])
    print(list)


print("Enter the no of elements")
n=int(input())
num=[]
index=[]
print("Enter the number")
for i in range(0,n,1):
    e=int(input())
    num.append(e)
print("Enter the index")
for i in range(0,n,1):
    el=int(input())
    index.append(el)
target(num,index)
