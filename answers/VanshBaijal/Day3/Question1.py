n=int(input("Enter the number of terms:"))
s=0
x=0
for i in range(1,n+1):
    x=(x*10+i)
    s=s+x
print(s)
