def helper(s,ans):
    if(len(s)==0):
        print(ans)  #If the length of the string is 0 print the answer
    for i in range(len(s)): # Else take a combination of all the characters of the string and generate the string further
        char = s[i]
        left = s[0:i]
        right = s[i+1:]
        temp = left+right
        helper(temp,ans+char)
        

s = input()
helper(s,"") 
# Pass an empty string as an answer
