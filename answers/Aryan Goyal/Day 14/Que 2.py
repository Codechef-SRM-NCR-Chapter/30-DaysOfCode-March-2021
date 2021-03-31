l1=list(map(int, input().split())) 
l2=list(map(int, input().split())) 
l3=[]
if len(l1)<len(l2):
    for i in range(len(l1)):
        l3.append(l1[i]+l2[i])
    for i in range(len(l3),len(l2)):
        l3.append(l2[i])
    print(l3)
else:
    for i in range(len(l2)):
        l3.append(l1[i]+l2[i])
    for i in range(len(l3),len(l1)):
        l3.append(l1[i])
    print(l3)
