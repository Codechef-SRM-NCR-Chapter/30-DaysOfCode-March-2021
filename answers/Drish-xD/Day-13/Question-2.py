# Program to find the array is a palindrome or not using recursion :)


def palindrome(array, s, l):
    if s >= l:
        return True
    elif array[s] == array[l - 1]:
        return array[s + 1] == array[l - 2]
    else:
        return False


arr = list(map(int, input("Enter the elements of the list *with space b/w the numbers* : ").split()))
l = len(arr)
s = 0
if palindrome(arr, s, l):
    print("Palindrome")
else:
    print("Not Palindrome")
