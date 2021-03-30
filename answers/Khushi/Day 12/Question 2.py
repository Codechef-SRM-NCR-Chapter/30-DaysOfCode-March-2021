t=int(input("Enter no. of test cases: "))
a=[]
for t in range(t,0,-1):
    n=int(input("Enter no. of charecters in string: "))
    c=0
    i=0
    s=list(input("Enter the string: "))
    if (len(s)!=n):
        break
    n=1
    while(i<=len(s) and n<len(s)+1):
        l=s[i:i+n]
        if (int(l[0])==1 and int(l[-1])==1):
            c+=1
        i+=1
        if(i+n==len(s)+1):
            n+=1
            i=0
    a.append(c)
print("Output: ")
for c in a:
 print(c)