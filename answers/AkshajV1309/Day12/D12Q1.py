n,o=input("Len of Str: "),int(input("No. Operations: "))
S,P=list(input("Enter Str: ")),[]
for o in range(o,0,-1):
    n=int(input("No. of Integers: "))
    if(n==1):
        w=int(input("Enter insertion positon: "))-1
        S[w]='x'
    elif(n==2):
        w,i=int(input("Enter Start Slice index: "))-1,int(input("Enter End Slice index: "))
        s=S[w:i]
        P.append('Yes')if(s==s[::-1]) else P.append('No')
for S in P:
    print(S)
