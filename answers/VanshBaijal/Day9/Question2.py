n=[int(x) for x in input("Enter the numbers with space: ").split()]
x,y,z=0,1,[0]
while(x<=len(n)and y<len(n)+1):
    z.append(sum(n[x:x+y]))
    x+=1
    if(x+y==len(n)+1):
        y+=1
        x=0
print("OUTPUT (Largest Sum):",max(z))
