n=int(input("Enter the value: "))
s=0
a=2
for i in range(1,n+1):
    s=(i**3)+a
    print(s,end=",")
    a=a+2
