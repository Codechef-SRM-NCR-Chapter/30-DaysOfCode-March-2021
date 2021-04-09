def count(string,  patterns):
    a = string.count(patterns) 
    return a


st = input("Enter the string :")
k = int(input("Enter the no of patterns :"))
sol = []                           

for i in range(k):
    pattern = input("enter the pattern :")      
    sol.append(count(st, pattern))              

for i in sol:
    print(i)
