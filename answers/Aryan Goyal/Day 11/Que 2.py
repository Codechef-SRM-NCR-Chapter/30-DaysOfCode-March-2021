s=input("")
no=int(input(""))
list234=[]
for i in range(no):
    s1=input("")
    s2=list(s1)
    base = []
    count=0
    lists = [base]
    for i in range(len(s)):
        orig = lists[:]
        new = s[i]
        for j in range(len(lists)):
            lists[j] = lists[j] + [new]
        lists = orig + lists
    for q in lists:
        if q==s2:
            count+=1
    list234.append(count)
for li in list234:
    print(li)
