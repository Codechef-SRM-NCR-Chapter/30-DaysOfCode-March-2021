s = input()
count = 0
first = True
t = ""
for char in s:
    if(first==True):
        t+=char
        count+=1
        first = False
        continue

    if(char.isupper()==False):
        t+=char
    else:
        print(t,end="\n")
        count+=1
        t = ""
        t+=char

print(t,end="\n")
print(count)
