# Check if the given string is a pangram or not 


import string 

def ispangram(str): 

    alphabet = "abcdefghijklmnopqrstuvwxyz"

    for char in alphabet: 

        if char not in str.lower(): 

            return False

    return True


str = input ()

if(ispangram(str) == True): 

    print("PANGRAM EXISTS") 

else: 

    print("PANAGRAM DOESN'T EXIST") 
