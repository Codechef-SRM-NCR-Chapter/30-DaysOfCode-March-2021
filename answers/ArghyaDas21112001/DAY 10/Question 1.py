import string
def ispangram(str):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet:
        if char not in str.lower():
            return False
  
    return True
    
    
print("Enter the sentence:")
string = input()
if (ispangram(string) == True):
    print("Pangram Exists")
else:
    print("Pangram Doesn't Exists")
            
