s=input("Enter string:")
n=int(input("Enter no. of substring:"))
l=[]
print("Enter substrings: ")
for i in range(n):
    substr1=input()
    substr2=list(substr1)
    a=[]
    count=0
    l1=[a]
    for i in range(len(s)):
        x=l1[:]
        new=s[i]
        for j in range(len(l1)):
            l1[j]=l1[j]+[new]
        l1+=x
    for k in l1:
        if (k==substr2):
            count=count+1
    l.append(count)
print("Output:")
for l2 in l:
    print(l2)