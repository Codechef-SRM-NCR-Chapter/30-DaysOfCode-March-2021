def pangram(s):
   a = "abcdefghijklmnopqrstuvwxyz"
   for i in a:
      if i not in s.lower():
         return False
   return True

pan_Str = input("Enter the String : ")
if(pangram(pan_Str) == True):
   print("Pangram Exists")
else:
   print("Pangram Not Exists")
