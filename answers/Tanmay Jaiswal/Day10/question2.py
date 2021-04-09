str = input("Enter words: ")

l = len(str)
x=0
nof=1

for i in range (1,l):
    if str[i].isupper():
        print(str[x:i])
        x=i
        nof+=1
        
print(str[x:])
print(nof)
