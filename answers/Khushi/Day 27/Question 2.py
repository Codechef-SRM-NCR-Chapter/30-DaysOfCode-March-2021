def repeatedString(s,n):
    r=0
    l=len(s)
    for i in range(0,l):
        if(s[i]=='a'):
            r+= 1
    r*=int(n/l)
    for i in range(0,n%l):
        if(s[i]=='a'):
            r+= 1
    return r

if __name__=='__main__':
    s=input("Enter string: ")
    n=int(input("Enter no. of characters to consider: "))
    result=repeatedString(s,n)
    print("OUTPUT:",str(result))

