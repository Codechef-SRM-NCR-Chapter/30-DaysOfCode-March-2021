def uniqueCharacters(num):
    for i in range(len(num)):
        for j in range(i + 1,len(num)): 
            if(num[i] == num[j]):
                return False
    return True
num = input('enter no.') 
 
if(uniqueCharacters(num)):
    print("The String ", num," has all unique characters")
else:
    print("The String ", num, " has duplicate characters")
