s=input("enter the string to be checked")
c=0
for i in s:

    if i.isupper():
        print()
        c+=1

    print(i, end="")
print()
print(c)


