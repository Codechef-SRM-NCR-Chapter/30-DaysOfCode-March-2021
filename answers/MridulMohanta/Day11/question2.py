import string

p = input("Enter main pattern: ")
d = {}
n = int(input("Enter the number of patterns: "))  #3

for x in range(0, n):
    d[x]=input("Enter patterns required: ")      #x is 0,1,2

co=0

for y in d:
    for i in range(0, len(p) - len(d[y]) + 1):   #i will take values 0,1,2,3,4
        sub = p[i: (i+len(d[y]))]
        if(d[y] == sub):
           co = co + 1 
    print(co)
    co = 0    
