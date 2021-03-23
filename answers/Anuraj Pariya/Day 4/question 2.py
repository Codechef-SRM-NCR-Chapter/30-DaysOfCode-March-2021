def numpat(n):
    num = 1
    for i in range(1,n+1):
        for j in range(1, i+1):
            print(num, end=" ")
            num = num + 1
        print(' ')
n = int(input('enter no. of pattern '))
numpat(n)
