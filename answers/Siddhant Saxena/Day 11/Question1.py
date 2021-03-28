from re import *
s=input("enter the string")
n=input("enter the number of patterns")
arr=[]
r=["NO","NO","NO"]
c=0
for i in arr:
    i=input("enter the pattern")
    arr.append(i)

for i in arr:
    if re.search( MyString2, MyString1 ):
        arr[c]="yes"

    c+=1
print(r)
