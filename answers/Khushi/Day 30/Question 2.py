def findStr(s):
    s=str(s)
    subS=[s[i:j] for i in range(len(s)) for j in range(i+1,len(s)+1)]
    subStr=[]
    mCount=0
    condition=True
    for num in subS:
        for digit in num:
            if(digit=="4" or digit=="7"):
                continue
            else:
                return -1

        if(not num):
            return -1

        count=subS.count(num)
        if(count<mCount):
            return -1
        else:
            mCount=count
        if(condition==True):
            subStr.append(num)
    subStr.sort()
    return subStr[0]

if __name__=="__main__":
    s=input("Enter the string: ")
    print("OUTPUT:",findStr(s))