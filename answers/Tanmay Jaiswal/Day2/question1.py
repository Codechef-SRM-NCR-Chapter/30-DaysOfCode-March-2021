#write a program to check whether the given number is Disarium or not?

n = int(input("Enter number:"))
i= 1
sum = 0
num = n
while(num!=0):
    rem = num%10
    sum = sum*10+rem
    num = num//10
num = sum
sum = 0
while(num!= 0):
    rem = num % 10
    sum = sum + pow(rem,i)
    num = num//10
    i+=1
if sum == n:
    print(n,"is a 'Disarium Number'.")
else:
    print(n,"is not a 'Disarium Number'.")
