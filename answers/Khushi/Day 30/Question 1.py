def func1(a):
    word_cases=len(a)
    for i in range(0,word_cases):
        if(len(a[i][0])>len(a[i][1])):
            a[i][0],a[i][1]=a[i][1],a[i][0]
    return a

def func2(s,a):
    a=func1(a)
    for i in range(0,len(s)):
        for j in range(0,len(a)-1):
            if(s[i]==a[1][j]):
                s[i]=a[1][j-1]
    return s

if __name__=="__main__":
    n,m=map(int,input("Enter no. of words in string and total no. of words in both language: ").split())
    a=[]
    for i in range(0,int(m)):
        w1,w2=map(str,input("Enter the string: ").split())
        a.append([w1,w2])
    s=list(input("Enter array elements: ").strip().split())[:int(n)]
    func2(s,a)
    print("OUTPUT:",end=" ")
    print(*s,sep=" ")