def removeDuplicates(s=""):
  if (len(s)<2):
    return s
  elif (s[0]==s[1]):
    return removeDuplicates(s[1:])
  else:
    return s[0]+removeDuplicates(s[1:])

s1=input("Enter string: ")
print("OUTPUT:",end="")
print(removeDuplicates(s1))