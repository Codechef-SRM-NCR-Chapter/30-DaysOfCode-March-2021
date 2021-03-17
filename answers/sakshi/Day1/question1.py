print("Enter the value of n")
n=int(input())
print("Series is: ")
for i in range(1,n+1,1):
    x=pow(i,3)
    y=x+i*2
    print(y,end=",")
