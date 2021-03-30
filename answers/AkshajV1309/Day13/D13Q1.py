def digit_sum(N):
    if N==0:
        return 0
    return N%10 + digit_sum(N//10)
N=int(input('Enter Number: '))
print("Sum of digits of "f'{N} is:',digit_sum(N)) 
