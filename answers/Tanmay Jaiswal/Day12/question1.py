import sys

n = int(input("Length of string: "))
m = int(input("Number of test/operations: "))

count = 0

str = input("Enter Strings: ")
if len(str) > n:
    print("Error! length of characters exceeded!")
    sys.exit()
    
for i in range(m):
    s = input().split()
    
    s[1] = int(s[1])-1
    
    if (s[0] == '1'):
        str = str[:s[1]]+s[2]+str[s[1]+1:]
        print("Updated string: ",str)
    
    if (s[0] == '2'):
        temp = str[s[1]:int(s[2])]
        
        s[2] = int(s[2])-1
        
        for i in range(int(len(temp)/2)):
            if(temp[i]!=temp[len(temp)-i-1]):
                count = 1
                
        if(count == 0):
            print("Output: Yes")
        else:
            print("Output: No")
    count = 0
