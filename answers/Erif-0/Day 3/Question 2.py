print("30 DAYS of CODE")
print("DAY 3")
print("Question 2 ")

n=input("Enter the number \n")
res = [int(x) for x in str(n)] 
flag = 0
for i in range(len(res)): 
        for i1 in range(len(res)): 
            if i != i1: 
                if res[i] == res[i1]: 
                    flag = 1
                    
if(not flag) : 
    print (n ,'Is an unique number') 
else :  
    print (n ,'Is not an unique number') 