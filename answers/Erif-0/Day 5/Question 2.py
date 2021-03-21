print("30 DAYS of CODE")
print("DAY 5")
print("Question 2 ")

print("30 DAYS of CODE")
print("DAY 4")
print("Question 2 ")

print('\n')

def Prime(k) : 
 
    # Corner cases 
    if (k <= 1) : 
        return False
    if (k <= 3) : 
        return True
  
    if (k % 2 == 0 or k % 3 == 0) : 
        return False
 
    o = 5
    while(o * o <= k) : 
        if (k % o == 0 or k % (o + 2) == 0) : 
            return False
        o = o + 6
 
    return True

num = 1
for i in range(0, 4):
    for j in range(0, i+1):
        if(Prime(num)):
            print("#", end=" ")
        else:
            print("*", end=" ")
        num = num + 1
    print("\r")