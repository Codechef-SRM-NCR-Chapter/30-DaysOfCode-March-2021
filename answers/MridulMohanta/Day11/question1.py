import string

a = input("Enter sentence: ")
a = a.lower()
oddcount = 0

for x in range(97, 122):
    if ((a.count(chr(x)) % 2) == 1):
        oddcount = oddcount + 1
    if(oddcount>1):
        break

if (oddcount > 1):
    print("NO")
else:
    print("YES")
