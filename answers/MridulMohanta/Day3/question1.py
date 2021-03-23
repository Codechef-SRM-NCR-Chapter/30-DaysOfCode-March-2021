num = int(input("Enter number"))

n= 0 

for i in range(1,num+1):
    n = n * 10 + i
    print (n,end = (" "))
