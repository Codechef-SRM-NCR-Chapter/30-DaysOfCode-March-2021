import sys

print("Input:","\t")  

t = int(input("Number of test cases: "))
count = [0]*t

for i in range(t):
    
    n = int(input("Length of string: "))
    s = input()
    
    if len(s) > n:
        print("Error! length of characters exceeded!")
        sys.exit()
    
    for j in range(n):
        if (s[j] == '0'):
            continue
            
        for k in range(j,n):
            if (s[k] == '1'):
                count[i]+=1
                
print("Output:","\t")    

for i in range(t):
    print("\r",count[i])
