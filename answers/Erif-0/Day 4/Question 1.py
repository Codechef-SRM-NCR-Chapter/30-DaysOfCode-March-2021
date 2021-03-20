print("30 DAYS of CODE")
print("DAY 4")
print("Question 1 ")

import math
n= int(input("Enter a number to Find the Prime Factor: "))
i=2
sqroot = math.sqrt(n)
while i<=sqroot :
    if n% i == 0 :
        n = n/i
        print(i, end=',')
    else:
        i +=1
        
if n>2 :
    print(n)
    
