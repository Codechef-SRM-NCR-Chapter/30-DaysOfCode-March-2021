n=input("enter the number:\n")
c=0
for a in n:
    for b in n:
        if(a==b):
            c=c+1
    if c>1:
        print("not unique")
        break
    else:
        c=0
if (c<=1):
    print("it is unique")
