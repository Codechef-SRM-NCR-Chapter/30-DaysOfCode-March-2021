import math
n=input("Enter a number:")
s=list(n)
s1=0
for i in range(len(s)):
     s1+=math.pow(int(s[i]),i+1)
if int(s1)==int(n):
     print(n," is a Disarium")
else:
     print(n," is not a Disarium")
