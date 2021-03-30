def isPalindrome(s):
    if len(s) <= 1:
        return ("Palindrome")    
    return s[0] == s[-1] and isPalindrome(s[1:-1])
# give input like isPalindrome([1, 2, 2, 1])
