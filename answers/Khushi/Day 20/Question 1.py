def removeRepeat(n):
    s=[]
    for i in range(len(n)):
        if(i>0 and int(n[i])==int(n[i-1])):
            i+=1
        else:
            s.append(n[i])
            i+=1
    print("OUTPUT","".join(s))

t=int(input("Enter no. of test cases: "))
for i in range(t):
    n=list(input("Enter number: "))
    removeRepeat(n)

