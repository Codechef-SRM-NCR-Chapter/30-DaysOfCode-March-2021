from collections import Counter
s = (input("s ="))

count=0
c = Counter(s)

for i in c.values():
    if i % 2 != 0:
        count += 1
              
if count>1:
    print("no")
    
else:
    print("yes")
