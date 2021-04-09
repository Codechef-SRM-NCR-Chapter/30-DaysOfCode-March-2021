print("Input: ",end="")
arr = list(map(int, input("ARR[] = ").split()))

def palindrome(arr, first, last):
    
    if first >= last:
        return 1
    
    if arr[first] == arr[last]:
        return palindrome(arr, first+1, last-1)
    
    else:
        return 0
    
n = len(arr)

if (palindrome(arr, 0, n-1) == 1):
    print("Output: Palindrome")

else:
    print("Output: Not Palindrome")
