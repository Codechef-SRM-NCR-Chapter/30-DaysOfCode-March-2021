def isPossible(s):
    dict = {}
    for char in s:
        if char not in dict:
            dict[char]=1
        else:
            dict[char]+=1
    
    count = True
    for key in dict:
        if(dict[key]%2==1):
            if(count==True):
                count = False
            else:
                return False
    return True


s = input()
if(isPossible(s)==True):
    print("Yes")
else:
    print("NO")
