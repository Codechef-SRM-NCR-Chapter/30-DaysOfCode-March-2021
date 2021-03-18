num=int(input("Enter number"))
nnum = int(str(num)[::-1])
n=nnum if nnum>num else num
i=2
while(i<n):
    if((num%i==0 and i!=num) or (nnum%i==0 and i!=nnum)):
        flag=False
        break
    else:
        flag=True
    i+=1
print(num,'is Emirp number') if flag==True else print(num,'is not Emirp number') 
   
      
