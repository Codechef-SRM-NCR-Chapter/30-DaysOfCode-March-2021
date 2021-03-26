s = input()
c = 0
for i in range(len(s)):
    if (s[i].isupper()):
          print(s[c:i])
          c = i
print(s[c:])
