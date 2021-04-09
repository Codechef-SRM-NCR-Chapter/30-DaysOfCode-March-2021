def camelcaseWords(str):
    count=1
    x=0
    for i in range(1,len(str)-1):
        if (str[i].isupper()):
            count+=1
            print(str[x:i])
            x=i
    print(str[x:])
    print(count)
s=input("Enter the string:")
camelcaseWords(s)
