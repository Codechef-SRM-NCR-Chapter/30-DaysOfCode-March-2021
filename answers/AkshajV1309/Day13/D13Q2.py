def palindrome(L):
    if len(L)<=1:
        return 1
    elif L[0]==L[-1]:
        return palindrome(L[1:-1])
    return 0
L=[x for x in input('Enter NUMS seprated by space: ').split()] 
print("Palindrome") if(palindrome(L)==True) else print("Not Palindrome")
