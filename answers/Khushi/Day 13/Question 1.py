def sumOfDigit(n):
    if (n==0):
        return 0
    return(n%10+sumOfDigit(int(n/10)))

num=int(input("Enter number: "))
result=sumOfDigit(num)
print("Output:",result)