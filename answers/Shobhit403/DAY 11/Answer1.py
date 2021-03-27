NO_OF_CHARS = 256
def canFormPalindrome(string):
    count = [0 for i in range(NO_OF_CHARS)]
    for i in string:
        count[ord(i)] += 1
    odd = 0
    for i in range(NO_OF_CHARS):
        if (count[i] & 1):
            odd += 1
        if (odd > 1):
            return False
    return True
if(canFormPalindrome("aabbccdd")):
    print ("YES")
else:
    print ("NO")
if(canFormPalindrome("cdefgtds")):
    print ("YES")
else:
    print ("NO")
