def series(n):
     x=1
     for i in range(n):
         m= (x*x*x)+(x*2)
         print(m, end=" ")
         x+=1
n = int(input("Enter the Number :"))
series(n)
