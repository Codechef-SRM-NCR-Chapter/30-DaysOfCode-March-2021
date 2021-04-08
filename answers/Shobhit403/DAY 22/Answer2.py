S=int(input("Enter the Size: "))
R=int(input("Enter the position from where the number to be reversed: "))
z=[]
print("Enter the Elements: ")
for i in range(S):
    z.append(int(input()))
i=0
while i<R//2:
    v=z[i]
    z[i]=z[R-1-i]
    z[R-1-i]=v
    i+=1
print(z)
