def add(l1,l2):
    l=len(l1)-(len(l2)-1)
    for i in range(0,len(l2),1):
        if (l-i>=len(l1)):
            break
        else:
            l1[i]=l1[i]+l2[i]
    return l1

a=[23,5,2,7,87]
b=[4,67,2,8]
print("OUTPUT:")
print(add(a,b))
