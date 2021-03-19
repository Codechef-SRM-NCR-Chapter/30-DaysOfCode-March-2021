n = int(input())
s = {}
a = 0
c = 0
while(n!=0):
    r = n%10
    n = int(n/10)
    s[a] = r 
    for i in range (a):
        if (r==s[i]):
            c += 1
            break
    a+=1
if(c==0):
    print("It is a unique number")
else:
    print("It is not a unique number")
