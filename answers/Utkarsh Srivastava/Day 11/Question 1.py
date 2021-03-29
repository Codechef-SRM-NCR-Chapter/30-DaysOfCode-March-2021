s = input()
s = s.upper()
c = r = 0
for i in ("ABCDEFGHIJKLMNOPQRSTUVWXYZ"):
        for j in s:
            if(i==j):
                c = c+1
        if(c%2==1):
            r = r+1
        c = 0
if(r==1 and len(s)%2==1):
    print("Palindrome exists")
elif(r==0 and len(s)%2==0):
    print("Palindrome exists")
else:
    print("Palindrome does not exists")
