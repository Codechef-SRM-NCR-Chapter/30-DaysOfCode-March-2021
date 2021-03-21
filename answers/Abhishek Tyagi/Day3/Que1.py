num=int(input("Enter Number of term"))
s=0
print("series are...",end=" ")
for i in range(1,num):
    s=s*10+i
    print(s,end=" ")
