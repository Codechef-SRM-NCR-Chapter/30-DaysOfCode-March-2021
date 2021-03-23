n= input('NUMS= ').split(',')
n=list(map(lambda x: int(x),n))
a=int(input("A: "));b=int(input("B: "));c=int(input("C: "))
end=[]
for i in range(len(n)):
    for j in range(len(n)):
        if i==j:
            continue
        for k in range(len(n)):
            if (k==i or k==j) or not (i<j<k):
                continue
            if abs(n[i]-n[j])<=a:
                if abs(n[j]-n[k])<=b:
                    if abs(n[i]-n[k])<=c:
                        end.append((n[i],n[j],n[k]))
print(len(end))
