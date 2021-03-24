r=[int(x) for x in input('Enter numbers seprated by space: ').split()]
a=int(input("Enter A: "))
b=int(input("Enter B: "))
c=int(input("Enter C: "))
result=[]
for i in range(len(r)):
    for j in range(len(r)):
        if i==j:
            continue
        for k in range(len(r)):
            if (k==i or k==j) or not (i<j<k):
                continue
            if abs(r[i]-r[j])<=a:
                if abs(r[j]-r[k])<=b:
                    if abs(r[i]-r[k])<=c:
                        result.append((r[i],r[j],r[k]))
print(len(result))
