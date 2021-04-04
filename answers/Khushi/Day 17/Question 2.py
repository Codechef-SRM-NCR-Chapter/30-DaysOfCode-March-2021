l=int(input('Enter size of the array: '))
a=[]
print("Enter",l,"elements")
for i in range(l):
    a.append(int(input()))
x=[]
i=0
n=1
while(i<=l and n<l+1):
    if sum(a[i:i+n])==0:
        x.append(a[i:i+n])
    i+=1
    if(i+n==l+1):
        n+=1
        i=0
print("Output:",len(x))