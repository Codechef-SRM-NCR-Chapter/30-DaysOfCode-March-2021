t=int(input(""))
for k in range(t):
    count=0
    no=int(input(""))
    n=input("")
    l=list(n)
    base = []  
    lists = [base]
    for i in range(len(l)):
        orig = lists[:]
        new = l[i]
        for j in range(len(lists)):
            lists[j] = lists[j] + [new]
        lists = orig + lists
    print(lists)
    for q in lists:
        if len(q)>=2:
            if q[0]=='1' and q[-1]=='1':
                count+=1
    print(count)
