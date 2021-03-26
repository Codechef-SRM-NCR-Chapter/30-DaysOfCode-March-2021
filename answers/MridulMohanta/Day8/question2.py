x=[int(x) for x in input('Enter the list : ').split()]
y=[]
sum=0
for i in range(len(x)):
    for j in range(i+1,len(x)):
        y.append((x[i],x[j]))
for i in range(int(len(y))):
    a = min(y[i])+min(y[len(y)-i-1])
    if(a>sum):
        sum=a
print("Maximum possible sum is :",sum)
