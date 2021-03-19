num=int(input("Enter the number : "))
sum=0
s=0
print("The series is : ",end=" ")
for i in range(1,num+1):
    s=s*10+i
    print(s,end=" ")
    sum=sum+s
print("\nThe sum of the series is : ",sum)
