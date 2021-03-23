#Print first 50 terms of Fibonacci Series:
f1=0
f2=1
print(f1,end=" ")
for x in range (1,50):
    print(f2,end=" ")
    next=f1+f2
    f1=f2
    f2=next
