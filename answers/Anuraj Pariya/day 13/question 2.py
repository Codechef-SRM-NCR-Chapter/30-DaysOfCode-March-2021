def palindrome(arr, n):
    flag = 0
    i = 0
    while (i <= n // 2 and n != 0):
        if (arr[i] != arr[n - i - 1]):
            flag = 1
            break
        i += 1
    if (flag == 1):
        print("Not Palindrome")
    else:
        print("Palindrome")
        
arr = list(map(int, input("Enter arr with space: ").split()))
n = len(arr)
 
palindrome(arr, n)
