import re
s=input("Enter String: ")
i=int(input("Enter no. of SubString: "))
z=[]
while(len(z)<i):
    t=input("Enter SubString: ")
    r=re.findall(t, s)
    z.append(str(len(r)))
print('\n'.join(z))
