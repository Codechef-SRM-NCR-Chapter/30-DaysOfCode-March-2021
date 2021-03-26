s = input()
s = s.lower()
panagram = True

lst = []

for i in range(0,26):
    lst.append(False)

for char in s:
    if not char == " ":
        lst[ord(char)-ord('a')]=True

for ch in lst:
    if ch == False:
        panagram = False
        break

if(panagram==False):
    print("Panagram Doesn't Exist")
else:
    print("Panagram Exists")
