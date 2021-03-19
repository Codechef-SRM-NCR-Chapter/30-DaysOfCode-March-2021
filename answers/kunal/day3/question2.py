def main():
    s=input("enter number:")
    p=int(s)
    l=[]
    flag=1
    while p>0:
        x=p%10
        p=p//10
        l.append(x)
    for i in l:
        if s.count(str(i))==1:
            flag=1
            continue
        else:
            print("Number is not unique")
            flag=0
            break
    if flag==1:
        print("Number is  unique")

main()

