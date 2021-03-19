n=int(input('enter number'))
s=0
print('series is ' , end=" ")
for i in range (1,n+1):
    a=s*10+i
    s=a+s
print(s)
