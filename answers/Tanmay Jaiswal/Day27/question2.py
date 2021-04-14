print("Input=)")
str = input()          # A string to repeat
n = int(input())       # number of characters

l = len(str)           #len of strings
value = str.count("a")

#process to count "a" in the above string
a = (n//l)*value
b = str.count("a",0,n%l)   

print("\nOutput=)")
print(a+b)
