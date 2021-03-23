
def prime(n):
     if n > 1:
         for i in range(2, int(n/2)+1):
             if (n % i) == 0:
                 break
         else:
              return True
     else:
          return False
      
n=int(input("Enter Number:"))
p=n
s=0

x=prime(n)
if x==True:
    
     s+=1
rev = 0

while n>0:
    temp = n % 10
    rev = rev * 10 + temp
    n = n // 10
    
y=prime(rev)
if y==True:
     s+=1
     
if s==2:
     print(p, " is Emirp Number")
else:
     print(p, " is not Emirp Number")