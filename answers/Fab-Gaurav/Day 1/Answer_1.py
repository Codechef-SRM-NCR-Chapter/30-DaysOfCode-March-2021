#Program to print the series 3, 12, 33, 72, ...... upto n

n=int(input("Enter the value of n : "))
s=0
a=2
for i in range(1,n+1):
    s=(i**3)+a
    print(s,end=",")
    a=a+2
