s = input()
s = s.upper()
c = 0
for i in ("ABCDEFGHIJKLMNOPQRSTUVWXYZ"):
    for j in s:
        if(i!=j):
            c = 0 
        else:
            c = 1
            break
    if(c==0):
        break
if c==1:
    print("Pangram exists")
else:
    print("Pangram doesn't exists")
