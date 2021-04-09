str = input("Enter strings: ")

def pangram(str):


    test= "abcdefghijklmnopqrstuvwxyz"

    for char in test:
        if char not in str.lower():
            return False
        
    return True
        
if pangram (str)== True:
    print("Pangram exists")

else:
    print("Pangram doesn't exists")
