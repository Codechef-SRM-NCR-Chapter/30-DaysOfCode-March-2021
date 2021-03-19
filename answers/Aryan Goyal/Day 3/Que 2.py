n=input("Enter a number:")
l=list(n)
l1=[]
for i in l:
     if i not in l1:
          l1.append(i)
if len(l1)==len(l):
     print(n, "IS A UNIQUE NUMBER")
else:
     print(n, "IS NOT A UNIQUE NUMBER")
