def checkPangram(arg):
  if len(set('abcdefghijklmnopqrstuvwxyz')-set(arg.lower()))==0:
    return True
  return False
s=input("Enter the string: ")
if(checkPangram(s)):
  print("Pangram exists")
else:
  print("Pangram doesn't exist")