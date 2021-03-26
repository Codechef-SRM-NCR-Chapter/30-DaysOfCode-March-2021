s=input("enter the string to be checked")
arr=[]
s.lower()
f=0
for k in range(26):
    d=0
    arr.append(d)
for j in range(97,123):
    for i in range(len(s)):
        d=chr(j)
        if d==i:
            f=1
    if f==1:
       arr[j-97]=1


for k in range(26):
    if arr[k]==0:
        print("pangram doesnt exist")
        break
    else:
        print("pangram exists")


