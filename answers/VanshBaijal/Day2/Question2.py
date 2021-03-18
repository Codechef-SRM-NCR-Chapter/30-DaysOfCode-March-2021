num=int(input("Enter the number"))
nnum=int(str(num))
n=num if nnum>num else num
i=2
while(i<n):
    if ((num%i==0 and i!=num)) or (nnum%i==0 and i!=nnum):
        flag="false"
        break
    else:
        flag="true"
    i+=1
print(num,"is an emirp number") if flag=="true" else print(num,"is not an emirp number")
