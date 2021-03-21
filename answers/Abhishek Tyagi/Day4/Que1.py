num= int(input("Enter any no"))

f=0

for i in range(2,num+1):
    if num%i==0:
        for j in range(2,int(i/2)):
            if i%j ==0:
                f=1
                break

        if f==0:
            print(i)
