import re
s=input("Enter String:= ")
r=re.findall('[A-Z][^A-Z]*', s)
for s in r:
 print(s)
print(len(r))
