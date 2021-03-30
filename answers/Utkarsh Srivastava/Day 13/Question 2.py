import numpy as np
def palindrome(arr,b,e):
    if(b>=e):
        return True
    if(arr[b]==arr[e]):
        return palindrome(arr,b+1,e-1)
    else:
        return False
arr = np.array(input().split()).astype(int)
if(palindrome(arr,0,len(arr)-1)):
    print("Palindrome")
else:
    print("Not Palindrome")
