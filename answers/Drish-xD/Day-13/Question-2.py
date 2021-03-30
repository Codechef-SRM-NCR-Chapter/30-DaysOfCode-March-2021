# Program to find the array is a palindrome or not using recursion :)


def palindrome(array, s, l):
    if s >= l:
        return True
    elif array[s] == array[l - 1]:
        return array[s + 1] == array[l - 2]
    else:
        return False


arr = [1, 0, 1]
l = len(arr)
s = 0
if palindrome(arr, s, l):
    print("Palindrome")
else:
    print("Not Palindrome")
