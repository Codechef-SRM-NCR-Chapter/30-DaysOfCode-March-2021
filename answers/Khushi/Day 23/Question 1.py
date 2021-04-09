def RevString(s):
    s=s.split(" ")
    a=[]
    for i in s:
        a.append(i)
    while(len(a)>0):
        print(a[-1],end=" ")
        del a[-1]

s=input("Enter string: ")
print("OUTPUT: ",end="")
RevString(s)