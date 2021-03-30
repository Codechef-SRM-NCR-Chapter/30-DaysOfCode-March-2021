def checkPalindrome(arr,b,e):
    if(b>=e):
        return 1
    elif(arr[b]==arr[e]):
        return checkPalindrome(arr,b+1,e-1)
    else:
        return 0

n=int(input("Enter no of values in array:"))
a=[]
for i in range(n):
    x=int(input())
    a.append(x)
if(checkPalindrome(a,0,n-1)==1):
    print("PALINDROME")
else:
    print("NOT PALINDROME")
